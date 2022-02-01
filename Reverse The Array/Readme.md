<div _ngcontent-serverapp-c200="" class="description ng-star-inserted"><h4 id="given-an-array-list-39-arr-39-of-integers-and-a-position-m-you-have-to-reverse-the-array-after-that-position">Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.</h4>

<h4 id="example">Example:</h4>

<pre><code>We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0 
based indexing so the subarray {5, 6} will be reversed and our 
output array will be {1, 2, 3, 4, 6, 5}.
</code></pre>

<h5 id="input-format">Input format:</h5>

<pre><code>The very first line of input contains an integer ‘T’ denoting the number of test cases. 

The first line of every test case contains one integer ‘N’ where ‘N’ denotes the number of elements and an integer ‘M’ which denotes after which position the array has to be reversed.

The second line of every test case contains ‘N’ space-separated integers which denote the elements of input of array/list.
</code></pre>

<h5 id="output-format">Output format:</h5>

<pre><code>For each test case, return the required array.

Output for each test case is printed on a separate line.
</code></pre>

<h5 id="note">Note:</h5>

<pre><code>You do not need to print anything, it has already been taken care of. Just implement the given function.

Consider 0-based indexing of the array.
</code></pre>

<h5 id="constraints">Constraints:</h5>

<pre><code>1 &lt;= T &lt;= 10
0 &lt;= M &lt;= N &lt;= 5*10^4
-10^9 &lt;= ARR[i] &lt;= 10^9

Time Limit: 1 sec
</code></pre>
</div>
<div _ngcontent-serverapp-c200="" class="description ng-star-inserted"><h5>Sample Input 1:</h5>

<pre><code>2
6 3
1 2 3 4 5 6
5 2
10 9 8 7 6
</code></pre>

<h5>Sample Output 1:</h5>

<pre><code>1 2 3 4 6 5
10 9 8 6 7
</code></pre>

<h5>Explanation 1:</h5>

<pre><code>For the first test case, 
Considering 0-based indexing we have M = 3 so the 
subarray[M+1 … N-1] has to be reversed.
Therefore the required output will be {1, 2, 3, 4, 6, 5}.

For the second test case, 
Considering 0-based indexing we have M = 2 so the 
subarray[M+1 … N-1] has to be reversed.
Therefore the required output will be {10, 9, 8, 6, 7}.
</code></pre>

<h5>Sample Input 2:</h5>

<pre><code>2
7 3
1 4 5 6 6 7 7 
9 3
10 4 5 2 3 6 1 3 6
</code></pre>

<h5>Sample Output 2:</h5>

<pre><code> 1 4 5 6 7 7 6
 10 4 5 2 6 3 1 6 3 
</code></pre>
</div>
