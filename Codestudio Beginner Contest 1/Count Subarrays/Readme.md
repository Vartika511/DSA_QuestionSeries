<div _ngcontent-serverapp-c219="" class="description ng-star-inserted"><h4 id="you-are-given-an-array-of-0s-and-1s-your-task-is-to-count-the-number-of-subarrays-of-size-two-with-distinct-elements-that-is-either-0-1-or-1-0">You are given an array of 0s and 1s. Your task is to count the number of subarrays of size two with distinct elements. That is, either [0,1] or [1,0].</h4>

<h4 id="for-example">For example :</h4>

<pre><code>If the array is [0,1,0], it has two such subarrays. The first one is ‘0,1’ starting at index 0, and the second is ‘1,0’ starting at index 1.
</code></pre>

<h5 id="input-format">Input Format :</h5>

<pre><code>The first line contains 'T', denoting the number of test cases.
For each Test :
The first line contains an integer ‘N’, the size of the array.
The second line contains ‘N’ space-separated integers. It is guaranteed that each element is either ‘0’ or ‘1’.
</code></pre>

<h5 id="output-format">Output Format :</h5>

<pre><code>For each test case, print the number of such subarrays on a new line.
</code></pre>

<h5 id="note">Note :</h5>

<pre><code>You are not required to print the expected output. It has already been taken care of. Just implement the function.
</code></pre>

<h5 id="constraints">Constraints :</h5>

<pre><code>1 &lt;= T &lt;= 10
1 &lt;= N &lt;= 10^5
Arr[i] ∈ {0,1}

Note: It is guaranteed that the sum of N across all test cases will be at most 10^5.

Time Limit: 1 sec
</code></pre>
</div>
<div _ngcontent-serverapp-c219="" class="description ng-star-inserted"><h5>Sample Input 1 :</h5>

<pre><code>1
3
1 0 1
</code></pre>

<h5>Sample Output 1 :</h5>

<pre><code>2
</code></pre>

<h5>Explanation for Sample Input 1 :</h5>

<pre><code>For test case 1 :
    The first subarray is ‘1,0’ starting at index 0, and the second is ‘0,1’ starting at index 1.
</code></pre>

<h5>Sample Input 2 :</h5>

<pre><code>1
2
0 0
2
1 1
</code></pre>

<h5>Sample Output 2 :</h5>

<pre><code>0
0
</code></pre>
</div>
