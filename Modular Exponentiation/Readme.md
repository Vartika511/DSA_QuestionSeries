<div _ngcontent-serverapp-c201="" class="description ng-star-inserted"><h4 id="you-are-given-a-three-integers-39-x-39-39-n-39-and-39-m-39-your-task-is-to-find-39-x-39-39-n-39-39-m-39-a-b-is-defined-as-a-raised-to-power-b-and-a-c-is-the-remainder-when-a-is-divided-by-c">You are given a three integers 'X', 'N', and 'M'. Your task is to find ('X' ^ 'N') % 'M'. A ^ B is defined as A raised to power B and A % C is the remainder when A is divided by C.</h4>

<h5 id="input-format">Input format :</h5>

<pre><code>The first line of input contains a single integer 'T', representing the number of test cases. 

The first line of each test contains three space-separated integers 'X', 'N', and 'M'.
</code></pre>

<h5 id="output-format">Output format :</h5>

<pre><code>For each test case, return a single line containing the value of ('X' ^ 'N') % 'M'.
</code></pre>

<h5 id="note">Note:</h5>

<pre><code>You don't need to print anything, it has already been taken care of. Just implement the given function.
</code></pre>

<h5 id="follow-up">Follow Up :</h5>

<pre><code>Can you solve the problem in O(log 'N') time complexity and O(1) space complexity?
</code></pre>

<h5 id="constraints">Constraints :</h5>

<pre><code>1 &lt;= T &lt;= 100   
1 &lt;= X, N, M &lt;= 10^9

Time limit: 1 sec
</code></pre>
</div>
<div _ngcontent-serverapp-c201="" class="description ng-star-inserted"><h5>Sample Input 1 :</h5>

<pre><code>2 
3 1 2
4 3 10
</code></pre>

<h5>Sample Output 1 :</h5>

<pre><code>1
4
</code></pre>

<h5>Explanation for Sample Output 1:</h5>

<pre><code>In test case 1, 
X = 3, N = 1, and M = 2 
X ^ N = 3 ^ 1 = 3 
X ^ N % M = 3 % 2 = 1. 
So the answer will be 1.

In test case 2,
X = 4, N = 3, and M = 10 
X ^ N = 4 ^ 3 = 64 
X ^ N % M = 64 % 10 = 4. 
So the answer will be 4.
</code></pre>

<h5>Sample Input 2 :</h5>

<pre><code>2
5 2 10 
2 5 4
</code></pre>

<h5>Sample Output 2 :</h5>

<pre><code>5
0
</code></pre>

<h5>Explanation for Sample Output 2:</h5>

<pre><code>In test case 1, 
X = 5, N = 2, and M = 10 
X^N = 5^2 = 25 
X^N %M = 25 % 10 = 5. 
So the answer will be 5.

In test case 2,
X = 2, N = 5, and M = 4 
X^N = 2^5 = 32 
X^N %M = 32 % 4 = 0. 
So the answer will be 0.
</code></pre>
</div>
