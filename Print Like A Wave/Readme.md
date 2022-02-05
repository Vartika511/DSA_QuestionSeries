<div _ngcontent-serverapp-c201="" class="description ng-star-inserted"><h4 id="for-a-given-two-dimensional-integer-array-list-arr-of-size-n-x-m-print-the-arr-in-a-sine-wave-order-i-e-print-the-first-column-top-to-bottom-next-column-bottom-to-top-and-so-on">For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the ‘ARR’ in a sine wave order, i.e., print the first column top to bottom, next column bottom to top, and so on.</h4>

<h4 id="for-eg">For eg:-</h4>

<pre><code>The sine wave for the matrix:-
1 2
3 4
will be [1, 3, 2, 4].
</code></pre>

<h5 id="input-format">Input format :</h5>

<pre><code>The first line contains an Integer 'T' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first line of each test case contains two integer values, 'N' and 'M,’ separated by a single space. They represent the 'rows' and 'columns,’ respectively, for the two-dimensional array/list ‘ARR’.

The next ‘N’ line contains an ‘M’ single-separated integer denoting the value of ‘ARR’.
</code></pre>

<h5 id="output-format">Output format :</h5>

<pre><code>For each test case, print the two-dimensional array/list ‘ARR’ elements in the sine wave order in a single line, separated by a single space.

Output for every test case will be printed in a separate line.
</code></pre>

<h5 id="constraints">Constraints :</h5>

<pre><code>1 &lt;= T &lt;= 10
1 &lt;= N &lt;= 100
1 &lt;= M &lt;= 100
0 &lt;= ARR[i][j] &lt;= 100

Time Limit: 1sec
</code></pre>
</div>
<div _ngcontent-serverapp-c201="" class="description ng-star-inserted"><h5>Sample Input 1:</h5>

<pre><code>2
3 4
1 2 3 4
5 6 7 8
9 10 11 12
4 4
1 2 4 5
3 6 8 10
11 12 13 15
16 14 9 7
</code></pre>

<h5>Sample Output 1:</h5>

<pre><code>1 5 9 10 6 2 3 7 11 12 8 4
1 3 11 16 14 12 6 2 4 8 13 9 7 15 10 5 
</code></pre>

<h5>Explanation For Sample Input 1:</h5>

<pre><code>Here, the elements are printed in a form of a wave, first, the 0th column is printed from top to bottom then the 1st column from bottom to top, and so on. Basically, the even column is printed from top to bottom and the odd column in the opposite direction.
</code></pre>

<h5>Sample Input 2:</h5>

<pre><code>2
3 4 
1 2 3 4 
5 6 7 8 
9 10 11 12
5 3 
1 2 3 
4 5 6 
7 8 9   
10 11 12
13 14 15
</code></pre>

<h5>Sample Output 2:</h5>

<pre><code>1 5 9 10 6 2 3 7 11 12 8 4
1 4 7 10 13 14 11 8 5 2 3 6 9 12 15 
</code></pre>
</div>
