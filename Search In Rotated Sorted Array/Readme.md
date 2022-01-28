<div _ngcontent-serverapp-c200="" class="description ng-star-inserted"><h4 id="you-have-been-given-a-sorted-array-list-arr-consisting-of-n-elements-you-are-also-given-an-integer-k">You have been given a sorted array/list ARR consisting of ‘N’ elements. You are also given an integer ‘K’.</h4>

<h4 id="now-the-array-is-rotated-at-some-pivot-point-unknown-to-you-for-example-if-arr-1-3-5-7-8-then-after-rotating-arr-at-index-3-the-array-will-be-arr-7-8-1-3-5">Now the array is rotated at some pivot point unknown to you. For example, if ARR = [ 1, 3, 5, 7, 8]. Then after rotating ARR at index 3, the array will be ARR = [7, 8, 1, 3, 5].</h4>

<h4 id="now-your-task-is-to-find-the-index-at-which-k-is-present-in-arr">Now, your task is to find the index at which ‘K’ is present in ARR.</h4>

<h4 id="note">Note :</h4>

<pre><code>1. If ‘K’ is not present in ARR then print -1.
2. There are no duplicate elements present in ARR. 
3. ARR can be rotated only in the right direction.
</code></pre>

<h4 id="for-example-if-arr-12-15-18-2-4-and-k-2-then-the-position-at-which-k-is-present-in-the-array-is-3-0-indexed">For example, if ARR = [12, 15, 18, 2, 4] and K = 2, then the position at which K is present in the array is 3 (0-indexed).</h4>

<h5 id="follow-up">Follow Up</h5>

<pre><code>Can you do this in Logarithmic time and constant additional space? 
</code></pre>

<h5 id="input-format">Input Format</h5>

<pre><code>The first line of input contains an integer 'T' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first line of each test case contains two single-space separated integers ‘N’ and ‘K’, respectively.

The second line of each test case contains ‘N’ single space-separated integers, denoting the elements of the array/list ARR.
</code></pre>

<h5 id="output-format">Output Format :</h5>

<pre><code>For each test case return the index at which K is present in ARR.
</code></pre>

<h5 id="note">Note:</h5>

<pre><code>You do not need to print anything; it has already been taken care of. Just implement the given function.
</code></pre>

<h5 id="constraints">Constraints:</h5>

<pre><code>1 &lt;= T &lt;= 100
1 &lt;= N &lt;= 5000
0 &lt;= K &lt;= 10^5
0 &lt;= ARR[i] &lt;= 10^5

Time Limit : 1 second
</code></pre>
</div>
<div _ngcontent-serverapp-c200="" class="description ng-star-inserted"><h5>Sample Input 1:</h5>

<pre><code>2
4 3
8 9 4 5
7 2
2 4 5 6 8 9 1
</code></pre>

<h5>Sample output 1:</h5>

<pre><code>-1 
0
</code></pre>

<h5>Explanation of Sample output 1:</h5>

<pre><code>For the first test case, 3 is not present in the array. Hence the output will be -1.

For the second test case, the occurrence of 2 is at index 0. Hence the output is 0.
</code></pre>

<h5>Sample Input 2:</h5>

<pre><code>2
4 3
2 3 5 8
1 2
2
</code></pre>

<h5>Sample output 2:</h5>

<pre><code>1
0
</code></pre>
</div>
