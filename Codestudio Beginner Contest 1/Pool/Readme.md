<div _ngcontent-serverapp-c219="" class="description ng-star-inserted" style=""><h4 id="you-are-given-the-task-of-draining-a-pool-every-day-of-capacity-m-but-since-you-are-lazy-you-decided-not-to-drain-it-every-day-but-to-drain-it-only-when-necessary-such-that-the-pool-doesn-t-overflow-you-are-also-given-an-integer-array-a-of-length-n-now-the-pool-water-rises-by-a-i-mod-n-considering-0-based-indexing-level-every-day-due-to-rain-on-ith-day-your-task-is-to-find-the-minimum-number-of-days-you-can-spend-without-draining-the-pool-initially-the-pool-is-dry-and-has-no-water">You are given the task of draining a pool every day of capacity M. But since you are lazy, you decided not to drain it every day but to drain it only when necessary(such that the pool doesn’t overflow). You are also given an integer array A of length N. Now the pool water rises by A[i mod n] considering 0-based indexing level every day due to rain on ith day. Your task is to find the minimum number of days you can spend without draining the pool. Initially, the pool is dry and has no water.</h4>

<h5 id="example">Example:-</h5>

<pre><code>Let, 
N = 5
M = 13
A :- [1,2,3,2,1]
The answer should be 7 because on the 8th day the water level rises to 15 which is greater than 13 (1st Day-&gt; 1, 2nd Day -&gt; 3, 3rd Day -&gt; 6, 4th Day-&gt; 8 , 5th Day -&gt; 9, 6th Day -&gt; 10, 7th Day -&gt; 12).
</code></pre>

<h5 id="input-format">Input Format :</h5>

<pre><code>The first line contains a single integer ‘T’ representing the number of test cases. Then each test case follows.

The first line of each test case contains two integers ‘N’ and 'M' denoting the length of array A and the capacity of the pool respectively.

The next line contains ‘N’ integers denoting A[i] representing the ith element of the array.
</code></pre>

<h5 id="output-format">Output Format :</h5>

<pre><code>For each test case, print an integer denoting the maximum number of days you can spend without draining the pool.

The output of each test case should be printed in a separate line.
</code></pre>

<h5 id="note">Note :</h5>

<pre><code>You are not required to print anything, it has already been taken care of. Just implement the function.    
</code></pre>

<h5 id="constraints">Constraints :</h5>

<pre><code>1 &lt;= T &lt;= 5
1 &lt;= N &lt;= 10^5
1 &lt;= M &lt;= 10^9
1 &lt;= A[i] &lt;= 10^9 

Time Limit: 1 sec
</code></pre>
</div>
<div _ngcontent-serverapp-c219="" class="description ng-star-inserted" style=""><h5>Sample Input 1 :</h5>

<pre><code>2
5 13
1 2 3 2 1
4 8
2 2 2 2
</code></pre>

<h5>Sample Output 1 :</h5>

<pre><code>7
4
</code></pre>

<h5>Explanation for Sample Output 1 :</h5>

<pre><code>In the first test case, the output is 7 because on the 8th day the water level rises to 15 which is greater than 13 (1st Day-&gt; 1, 2nd Day -&gt; 3, 3rd Day -&gt; 6, 4th Day-&gt; 8 , 5th Day -&gt; 9, 6th Day -&gt; 10, 7th Day -&gt; 12). 
In the second test case, the output is 4 because on the 5th day the water level rises to 10 which is greater than 8 (1st Day-&gt; 2, 2nd Day -&gt; 4, 3rd Day -&gt; 6, 4th Day-&gt; 8).
</code></pre>

<h5>Sample Input 2 :</h5>

<pre><code>1
3 2
1 2 1
</code></pre>

<h5>Sample Output 2 :</h5>

<pre><code>1
</code></pre>
</div>
