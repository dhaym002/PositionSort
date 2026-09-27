
Position Sort was designed to sort large amounts of large numbers efficiently. 
--

The program performs faster than some Quicksort algorithms it has been tested against, such as those which use the Lomuto partitioning technique.

The most stenuous stress-test of the algorithm has been that of 50,000,000 integers ranging from 0-99999996, given to the program in reverse order.

With this data set the program runs 3-5 seconds faster than many Quicksort algorithms.

Compared to a Quicksort algorithm which uses Hoare's partitioning method, the program sorts a vector consisting only of repeating values 1.30 seconds faster. Postition Sort tends to sort the 50,000,000 reverse-sorted vector ~ 3.5 seconds slower than the Hoare's partitioning-aglorthim. 

The algorithm is not an "in-place" sorting algorithm, but I am currently experimenting with ways to make it so;
One auxillary vector is used and a temp vector is used to copy values—both are resized to 0 before leaving scope. 

Position sort is a stable sorting algorithm.

This code is covered under MIT Licnese Copyright (c) 2026 Daisha Haymon
--
See LICENSE for more details. 
