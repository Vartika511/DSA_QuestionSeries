<div _ngcontent-serverapp-c200="" class="description ng-star-inserted"><h4 id="you-have-been-given-a-sorted-array-list-arr-consisting-of-n-elements-you-are-also-given-an-integer-k">You have been given a sorted array/list ARR consisting of ‘N’ elements. You are also given an integer ‘K’.</h4>

<h4 id="now-your-task-is-to-find-the-first-and-last-occurrence-of-k-in-arr">Now, your task is to find the first and last occurrence of ‘K’ in ARR.</h4>

<h4 id="note">Note :</h4>

<pre><code>1. If ‘K’ is not present in the array, then the first and the last occurrence will be -1. 
2. ARR may contain duplicate elements.
</code></pre>

<h4 id="for-example-if-arr-0-1-1-5-and-k-1-then-the-first-and-last-occurrence-of-1-will-be-1-0-indexed-and-2">For example, if ARR = [0, 1, 1, 5] and K = 1, then the first and last occurrence of 1 will be 1(0 - indexed) and 2.</h4>

<h5 id="input-format">Input Format</h5>

<pre><code>The first line of input contains an integer 'T' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first line of each test case contains two single-space separated integers ‘N’ and ‘K’, respectively.

The second line of each test case contains ‘N’ single space-separated integers denoting the elements of the array/list ARR.
</code></pre>

<h5 id="output-format">Output Format :</h5>

<pre><code>Return two single-space separated integers denoting the first and the last occurrence of ‘K’ in ARR, respectively.
</code></pre>

<h5 id="note">Note:</h5>

<pre><code>You do not need to print anything; it has already been taken care of. Just implement the given function.
</code></pre>

<h5 id="constraints">Constraints:</h5>

<pre><code>1 &lt;= T &lt;= 100
1 &lt;= N &lt;= 5000
0 &lt;= K &lt;= 10^5
0 &lt;= ARR[i] &lt;=10^5

Time Limit : 1 second
</code></pre>
</div>
<div _ngcontent-serverapp-c200="" class="description ng-star-inserted"><h5>Sample Input 1:</h5>

<pre><code>2
6 3
0 5 5 6 6 6
8 2
0 0 1 1 2 2 2 2
</code></pre>

<h5>Sample output 1:</h5>

<pre><code>-1 -1 
4 7
</code></pre>

<h5>Explanation of Sample output 1:</h5>

<pre><code>For the first test case, 3 is not present in the array. Hence the first and last occurrence of 3 is -1 and -1.

For the second test case, the first occurrence of 2 in at index 4 and last occurrence is at index 7.
</code></pre>

<h5>Sample Input 2:</h5>

<pre><code>2
4 0
0 0 0 0
1 2
2
</code></pre>

<h5>Sample output 2:</h5>

<pre><code>0 3
0 0
</code></pre>
</div>
