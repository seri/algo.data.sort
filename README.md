Problem
=======

Given `n` and an array of `n` integers. Sort the array in ascending order.

Solutions
=========

- Most sorting algorithms are available on [wikipedia][wiki]

[wiki]: http://en.wikipedia.org/wiki/Sorting_algorithm

Benchmarking
============

For `O(n^2)` algorithms
-----------------------

Benchmarking is done for `n = 100K`. Time measured in seconds.

### On my desktop

<table>
<thead>
<tr>
    <th>Algorithm</th>
    <th>C++</th>
    <th>Lua</th>
    <th>Haskell</th>
</tr>
</thead>
<tbody>
<tr>
    <td>ShellSort</td>
    <td>11</td>
    <td>6.45</td>
</tr>
<tr>
    <td>InsertionSort</td>
    <td>9</td>
    <td>8.2</td>
</tr>
<tr>
    <td>SelectionSort</td>
    <td>13</td>
    <td>5</td>
</tr>
<tr>
    <td>BubbleSort</td>
    <td>44</td>
    <td>55</td>
</tr>
</tbody>
</table>

### On my laptop

<table>
<thead>
<tr>
    <th>Algorithm</th>
    <th>C++</th>
    <th>Lua</th>
    <th>Haskell</th>
</tr>
</thead>
<tbody>
<tr>
    <td>ShellSort</td>
    <td>23</td>
    <td>6.45</td>
</tr>
<tr>
    <td>InsertionSort</td>
    <td>20</td>
    <td>8.2</td>
</tr>
<tr>
    <td>SelectionSort</td>
    <td>26</td>
    <td>5</td>
</tr>
<tr>
    <td>BubbleSort</td>
    <td>58</td>
    <td>55</td>
</tr>
</tbody>
</table>

For `O(nlogn)` or better algorithms
-----------------------------------

Benchmarking is done for `n = 10M`. Time measured in seconds.

### On my desktop

<table>
<thead>
<tr>
    <th>Algorithm</th>
    <th>C++</th>
    <th>Lua</th>
    <th>Haskell</th>
</tr>
</thead>
<tbody>
<tr>
    <td>Builtin</td>
    <td>5.2</td>
    <td>17</td>
</tr>
<tr>
    <td>QuickSort</td>
    <td>5</td>
    <td>14</td>
</tr>
<tr>
    <td>MergeSort</td>
    <td>5.5</td>
    <td>45</td>
</tr>
<tr>
    <td>RadixSort</td>
    <td>9.7</td>
    <td>23</td>
</tr>
<tr>
    <td>HeapSort</td>
    <td>11.4</td>
    <td>55</td>
</tr>
</tbody>
</table>

### On my laptop

<table>
<thead>
<tr>
    <th>Algorithm</th>
    <th>C++</th>
    <th>Lua</th>
    <th>Haskell</th>
</tr>
</thead>
<tbody>
<tr>
    <td>Builtin</td>
    <td>15</td>
    <td>17</td>
</tr>
<tr>
    <td>QuickSort</td>
    <td>13</td>
    <td>14</td>
</tr>
<tr>
    <td>MergeSort</td>
    <td>14</td>
    <td>45</td>
</tr>
<tr>
    <td>RadixSort</td>
    <td>25</td>
    <td>23</td>
</tr>
<tr>
    <td>HeapSort</td>
    <td>27</td>
    <td>55</td>
</tr>
</tbody>
</table> 

Remarks
=======

Todo
====

- How did Lua outperform C++ in small input sizes? Are the C++ versions not optimized enough?
