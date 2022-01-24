<div _ngcontent-serverapp-c200="" class="description ng-star-inserted"><h4 id="you-are-given-an-integer-array-39-arr-39-of-size-39-n-39-and-an-integer-39-s-39-your-task-is-to-return-the-list-of-all-pairs-of-elements-such-that-each-sum-of-elements-of-each-pair-equals-39-s-39">You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.</h4>

<h4 id="note">Note:</h4>

<pre><code>Each pair should be sorted i.e the first value should be less than or equals to the second value. 

Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.
</code></pre>

<h5 id="input-format">Input Format:</h5>

<pre><code>The first line of input contains two space-separated integers 'N' and 'S', denoting the size of the input array and the value of 'S'.

The second and last line of input contains 'N' space-separated integers, denoting the elements of the input array: ARR[i] where 0 &lt;= i &lt; 'N'.
</code></pre>

<h5 id="output-format">Output Format:</h5>

<pre><code>Print 'C' lines, each line contains one pair i.e two space-separated integers, where 'C' denotes the count of pairs having sum equals to given value 'S'.
</code></pre>

<h5 id="note">Note:</h5>

<pre><code>You are not required to print the output, it has already been taken care of. Just implement the function.
</code></pre>

<h5 id="constraints">Constraints:</h5>

<pre><code>1 &lt;= N &lt;= 10^3
-10^5 &lt;= ARR[i] &lt;= 10^5
-2 * 10^5 &lt;= S &lt;= 2 * 10^5

Time Limit: 1 sec
</code></pre>
</div>
<div _ngcontent-serverapp-c200="" class="description ng-star-inserted"><h5>Sample Input 1:</h5>

<pre><code>5 5
1 2 3 4 5
</code></pre>

<h5>Sample Output 1:</h5>

<pre><code>1 4
2 3
</code></pre>

<h5>Explaination For Sample Output 1:</h5>

<pre><code>Here, 1 + 4 = 5
      2 + 3 = 5
Hence the output will be, (1,4) , (2,3).
</code></pre>

<h5>Sample Input 2:</h5>

<pre><code>5 0
2 -3 3 3 -2
</code></pre>

<h5>Sample Output 2:</h5>

<pre><code>-3 3
-3 3
-2 2
</code></pre>
</div>
