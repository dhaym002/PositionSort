

Position Sort was designed to sort large amounts of large numbers efficiently. 
--

The program performs faster than some Quicksort algorithms it has been tested against, such as those which use the Lomuto partitioning technique.

The most stenuous stress-test of the algorithm has been that of 50,000,000 integers ranging from 0-99999996, given to the program in reverse order.

At this data-size the program runs 3-5 seconds faster than many Quicksort algorithms.

Compared to a Quicksort algorithm which uses Hoare's partitioning method, the program sorts a vector consisting only of repeating values faster. Postition Sort tends to sort the 50,000,000 reverse-sorted vector ~ 1.5 seconds slower than the Hoare's partition-aglorthim. 

The algorithm is not an "in-place" sorting algorithm, but I am currently experimenting with ways to make it so;
One auxillary vector is used and a temp vector is used to copy values—both are resized to 0 before leaving scope. 

Position sort is a stable sorting algorithm.


MIT License

Copyright (c) 2026 Daisha Haymon

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
