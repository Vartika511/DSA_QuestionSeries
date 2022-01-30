<div _ngcontent-serverapp-c214="" class="description ng-star-inserted" style=""><h4 id="ninja-has-an-array-39-arr-39-consisting-of-39-n-39-integers-your-primary-work-is-to-split-it-into-three-parts-so-that-each-integer-is-a-component-of-a-single-part-only-each-part-must-be-a-consecutive-contiguous-subsegment-of-the-original-array-and-can-also-be-empty-so-the-sum-of-each-part-is-denoted-as-39-s1-39-39-s2-39-and-39-s3-39-ninja-made-the-problem-even-harder-by-declaring-a-condition-that-39-s1-39-must-be-equal-to-39-s3-39-and-39-s1-39-must-be-the-maximum-possible-amongst-all-possible-ways">Ninja has an array 'ARR' consisting of 'N' integers. Your primary work is to split it into three parts so that each integer is a component of a single part only. Each part must be a consecutive contiguous subsegment of the original array and can also be empty. So, the sum of each part is denoted as 'S1', 'S2' and 'S3'. Ninja made the problem even harder by declaring a condition that 'S1' must be equal to 'S3' and 'S1' must be the maximum possible amongst all possible ways.</h4>

<h4 id="the-sum-of-the-empty-subsegment-is-0">The sum of the empty subsegment is 0.</h4>

<h5 id="example">EXAMPLE:</h5>

<pre><code>Input: 'N' = 5, ‘ARR’ = [5, 2, 4, 1, 4].
Output: 5
Explanation: We will split the array as [5], [2, 4] and [1, 4]. Thus, the maximum sum of the first part will be 5 and equal to the third part.
</code></pre>

<h5 id="input-format">Input Format :</h5>

<pre><code>The first line of input contains an integer ‘T’, denoting the number of test cases. 

The first line of each test case contains one integer, ‘N’, denoting the size of the array ‘ARR’.

The second line contains ‘N’ space-separated integers denoting the elements of array ‘ARR’.
</code></pre>

<h5 id="output-format">Output format :</h5>

<pre><code>For each test case, print an integer denoting the maximum sum of the first part possible when the array ‘ARR’ is split optimally.

Print the output of each test case in a new line.
</code></pre>

<h5 id="note">Note :</h5>

<pre><code>You don’t need to print anything. It has already been taken care of. Just implement the given function.
</code></pre>

<h5 id="constraints">Constraints :</h5>

<pre><code>1 &lt;= ‘T’ &lt;= 10
1 &lt;= ‘N’&lt;= 10^4
1 &lt;= ‘ARR[i]’ &lt;= 10^6

Time Limit: 1 sec
</code></pre>
</div>
<div _ngcontent-serverapp-c214="" class="description ng-star-inserted" style=""><h5>Sample Input 1 :</h5>

<pre><code>2
2
3 3
4 
2 3 1 5 
</code></pre>

<h5>Sample Output 1 :</h5>

<pre><code>3
5
</code></pre>

<h5>Explanation Of Sample Input 1 :</h5>

<pre><code>In the first test case, we will split the array as [3], [] and [3]. Thus, the maximum sum of the first part will be 3 and equal to the third part. Hence, the output is 3.

In the second test case, we will split the array like [2, 3], [1] and [5]. Thus, the maximum sum of the first part will be 5 and equal to the third part. Hence, the output is 5.
</code></pre>

<h5>Sample Input 2 :</h5>

<pre><code>2
7
10 34 12 14 54 41 15
4
4 1 1 1
</code></pre>

<h5>Sample Output 2 :</h5>

<pre><code>56
0
</code></pre>
</div>
