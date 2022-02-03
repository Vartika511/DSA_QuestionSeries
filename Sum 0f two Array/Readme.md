<div _ngcontent-serverapp-c201="" class="description ng-star-inserted"><h4 id="you-are-given-two-numbers-39-a-39-and-39-b-39-in-the-form-of-two-arrays-a-and-b-of-lengths-39-n-39-and-39-m-39-respectively-where-each-array-element-represents-a-digit-you-need-to-find-the-sum-of-these-two-numbers-and-return-this-sum-in-the-form-of-an-array">You are given two numbers 'A' and 'B' in the form of two arrays (A[] and B[]) of lengths 'N' and 'M' respectively, where each array element represents a digit. You need to find the sum of these two numbers and return this sum in the form of an array.</h4>

<h4 id="note">Note:</h4>

<pre><code>1. The length of each array is greater than zero.

2. The first index of each array is the most significant digit of the number. For example, if the array A[] = {4, 5, 1}, then the integer represented by this array is 451 and array B[] = {3, 4, 5} so the sum will be 451 + 345 = 796. So you need to return {7, 9, 6}.

3. Both numbers do not have any leading zeros in them. And subsequently, the sum should not contain any leading zeros.
</code></pre>

<h5 id="input-format">Input Format:</h5>

<pre><code>The first line of the input contains an integer T, denoting the number of test cases.

The first line of each test case contains two space-separated integers 'N' and 'M', denoting the size of the two arrays.

The second line of each test case contains 'N' space-separated integers denoting the elements of the first array.

The third line of each test case contains 'M' space-separated integers denoting the elements of the second array.
</code></pre>

<h5 id="output-format">Output Format:</h5>

<pre><code>The only line of output of each test case contains space-separated digits which correspond to the sum of the two numbers 'A' and 'B'.
</code></pre>

<h5 id="note">Note :</h5>

<pre><code>You do not need to print anything, it has already been taken care of. Just implement the given function.
</code></pre>

<h5 id="constraints">Constraints:</h5>

<pre><code>1 &lt;= T &lt;= 10^2
1 &lt;= N, M &lt;= 10^4
0 &lt;= A[i], B[i] &lt;= 9

Time Limit: 1 sec
</code></pre>
</div>
<div _ngcontent-serverapp-c201="" class="description ng-star-inserted"><h5>Sample Input 1:</h5>

<pre><code>2
4 1 
1 2 3 4
6
3 2
1 2 3
9 9    
</code></pre>

<h5>Sample Output 1:</h5>

<pre><code>1 2 4 0
2 2 2
</code></pre>

<h5>Explanation For Sample Input 1:</h5>

<pre><code>For the first test case, the integer represented by the first array is 1234 and the second array is 6, so the sum is 1234 + 6 =  1240.

For the second test case, the integer represented by the first array is 123 and the second array is 99, so the sum is 123 + 99 = 222.
</code></pre>

<h5>Sample Input 2:</h5>

<pre><code>2
3 3 
4 5 1
3 4 5
2 2
1 1
1 2
</code></pre>

<h5>Sample Output 2:</h5>

<pre><code>7 9 6
2 3
</code></pre>
</div>
