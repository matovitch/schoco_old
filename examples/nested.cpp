#include <iostream>
#include <cstdlib>
#include <chrono>

#include "schoco/scheduler.hpp"
#include "schoco/utils.hpp"

int main()
{
    schoco::Scheduler scheduler;

    scheduler.makeTask<void>
        (
            [&]()
            {
                auto&& nestedTask = scheduler.makeTask<void>
                    (
                        []()
                        {
                            std::cout << "Inside!" << std::endl;
                        }
                    );

                scheduler.attach(nestedTask);

                std::cout << "Outside!" << std::endl;
            }
        );

    scheduler.run();

    schoco::cleanUp();

    return EXIT_SUCCESS;
}
