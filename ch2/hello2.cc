/**
 * @file hello2.cc
 * @author Chao.Xie (xiechao06@gmail.com)
 * @brief execercise 2.2
 * @version 0.1
 * @date 2023-08-30
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <mpi.h>
#include <fmt/core.h>

int main(int argc, char **argv)
{
    fmt::println("before mpi initializing...");
    MPI_Init(&argc, &argv);
    fmt::println("after mpi initializing...");
    MPI_Finalize();
    fmt::println("after mpi is finalized...");
    return 0;
}
