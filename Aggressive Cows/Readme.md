<div _ngcontent-serverapp-c200="" class="description ng-star-inserted"><h4 id="given-an-array-of-length-n-where-each-element-denotes-the-position-of-a-stall-now-you-have-n-stalls-and-an-integer-k-which-denotes-the-number-of-cows-that-are-aggressive-to-prevent-the-cows-from-hurting-each-other-you-need-to-assign-the-cows-to-the-stalls-such-that-the-minimum-distance-between-any-two-of-them-is-as-large-as-possible-return-the-largest-minimum-distance">Given an array of length ‘N’, where each element denotes the position of a stall. Now you have ‘N’ stalls and an integer ‘K’ which denotes the number of cows that are aggressive. To prevent the cows from hurting each other, you need to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. Return the largest minimum distance.</h4>

<h5 id="input-format">Input format :</h5>

<pre><code>The first line contains a single integer ‘T’ denoting the number of test cases.

The first line of each test case contains two integers ‘N’ and ‘K’ denoting the number of elements in the array/list and the number of aggressive cows.

The second line contains ‘N’ single space-separated integers denoting the elements of the array.
</code></pre>

<h5 id="output-format">Output format :</h5>

<pre><code>For each test case, print the majority element in a separate line.
</code></pre>

<h5 id="note">Note :</h5>

<pre><code>You do not need to print anything; it has already been taken care of.
</code></pre>

<h5 id="constraints">Constraints :</h5>

<pre><code>1 &lt;= T &lt;= 5
2 &lt;= N &lt;= 20000
2 &lt;= C &lt;= N
0 &lt;= ARR[i] &lt;= 10 ^ 9

Where ‘T’ is the number of test cases, 'N' is the length of the given array and, ARR[i] denotes the i-th element in the array.

Time Limit: 1 sec.
</code></pre>
</div>
<div _ngcontent-serverapp-c200="" class="description ng-star-inserted"><h5>Sample Input 1 :</h5>

<pre><code>2
3 2
1 2 3
5 2
4 2 1 3 6
</code></pre>

<h5>Sample Output 1 :</h5>

<pre><code>2
5
</code></pre>

<h5>Explanation to Sample Input 1 :</h5>

<pre><code>In the first test case, the largest minimum distance will be 2 when 2 cows are placed at positions {1, 3}.

In the second test case, the largest minimum distance will be 5 when 2 cows are placed at positions {1, 6}.
</code></pre>

<h5>Sample Input 2 :</h5>

<pre><code>2
6 4
0 3 4 7 10 9
6 3
0 4 3 7 10 9
</code></pre>

<h5>Sample Output 2 :</h5>

<pre><code>3
4
</code></pre>

<h5>Explanation to Sample Input 2 :</h5>

<pre><code>In the first test case, the largest minimum distance will be 3 when 4 cows are placed at positions {0, 3, 7, 10}.

In the second test case, the largest minimum distance will be 4 when 3 cows are placed at positions {0, 4, 10}.
</code></pre>
</div>
