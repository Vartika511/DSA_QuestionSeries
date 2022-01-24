<div _ngcontent-serverapp-c200="" class="description ng-star-inserted"><h4 id="you-are-given-two-arrays-39-a-39-and-39-b-39-of-size-39-n-39-and-39-m-39-respectively-both-these-arrays-are-sorted-in-non-decreasing-order-you-have-to-find-the-intersection-of-these-two-arrays">You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.</h4>

<h4 id="intersection-of-two-arrays-is-an-array-that-consists-of-all-the-common-elements-occurring-in-both-arrays">Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.</h4>

<h5 id="note">Note :</h5>

<pre><code>1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.
</code></pre>

<h5 id="input-format">Input Format :</h5>

<pre><code>The first line of the input contains an integer 'T', denoting the number of test cases.

The first line of each test case contains two integers 'N' 'M', denoting the size of the two arrays.

The second line of each test case contains 'N' space-separated integers denoting the elements of the first array.

The third line of each test case contains 'M' space-separated integers denoting the elements of the second array.
</code></pre>

<h5 id="output-format">Output Format :</h5>

<pre><code>The only line of output of each test case contains 'K' space-separated integers which correspond to the intersection of the two arrays A and B.

The output of each test case will be printed on a separate line.
</code></pre>

<h5 id="note">Note :</h5>

<pre><code>You do not need to print anything, it has already been taken care of. Just implement the given function.
</code></pre>

<h5 id="constraints">Constraints :</h5>

<pre><code>1 &lt;= T &lt;= 100
1 &lt;= N, M &lt;= 10^4
0 &lt;= A[i] &lt;= 10^5
0 &lt;= B[i] &lt;= 10^5

Time Limit: 1 sec
</code></pre>

<h5 id="follow-up">Follow Up:</h5>

<pre><code>Can we solve this problem using the time complexity of O(max(N, M)).
</code></pre>
</div>
<div _ngcontent-serverapp-c200="" class="description ng-star-inserted"><h5>Sample Input 1 :</h5>

<pre><code>2
6 4
1 2 2 2 3 4
2 2 3 3
3 2
1 2 3
3 4  
</code></pre>

<h5>Sample Output 1 :</h5>

<pre><code>2 2 3
3   
</code></pre>

<h5>Explanation for Sample Input 1 :</h5>

<pre><code>For the first test case, the common elements are 2 2 3 in both the arrays, so we print it.

For the second test case, only 3 is common so we print 3.
</code></pre>

<h5>Sample Input 2 :</h5>

<pre><code>2
3 3 
1 4 5
3 4 5
1 1
3
6
</code></pre>

<h5>Sample Output 2 :</h5>

<pre><code>4 5
-1
</code></pre>
</div>
