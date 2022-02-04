<div _ngcontent-serverapp-c215="" class="description ng-star-inserted"><h4 id="ninja-recently-appeared-for-a-class-test-the-test-was-attended-by-n-students-and-the-marks-of-each-student-was-given-in-an-array-a">Ninja recently appeared for a class test. The test was attended by ‘N’ students and the marks of each student was given in an array ‘A’.</h4>

<h4 id="ninja-knows-that-he-got-a-rank-k-among-the-n-students-but-forgot-the-marks-achieved-by-him-the-ranks-are-given-according-to-the-better-marks-scored-by-the-students">Ninja knows that he got a rank ‘K’ among the ‘N’ students but forgot the marks achieved by him. The ranks are given according to the better marks scored by the students.</h4>

<h4 id="tell-the-marks-that-must-have-been-scored-by-ninja-to-get-a-rank-k">Tell the marks that must have been scored by Ninja to get a rank ‘K’.</h4>

<h5 id="example">Example :</h5>

<pre><code>N = 5
K = 3
A = [ 2, 5, 4, 4, 5 ]

Rank 1 and Rank 2 students get marks = 5.
Rank 3 and Rank 4 students get marks = 4.
Rank 5 student gets marks = 2.

So, Ninja must have scored 4 marks in order to achieve Rank = 3.
</code></pre>

<h5 id="input-format">Input Format :</h5>

<pre><code>The first line contains an integer 'T' which denotes the number of test cases to be run. Then the test cases follow.

The first line of each test case contains an integer ‘N’.

The second line of each test case contains an integer ‘K’.

The third line contains ‘N’ space separated integers denoting the elements of array ‘A’.
</code></pre>

<h5 id="output-format">Output format :</h5>

<pre><code>For each test case, print one integer denoting the score Ninja must have scored.

Print the output of each test case in a new line.
</code></pre>

<h5 id="note">Note :</h5>

<pre><code>You don’t need to print anything. It has already been taken care of. Just implement the given function.
</code></pre>

<h5 id="constraints">Constraints :</h5>

<pre><code>1 &lt;= T &lt;= 10
1 &lt;= N &lt;= 10^4
1 &lt;= K &lt;= N
0 &lt;= A[i] &lt;= 100

Time Limit: 1 sec
</code></pre>
</div>
<div _ngcontent-serverapp-c215="" class="description ng-star-inserted"><h5>Sample Input 1 :</h5>

<pre><code>2
3
1
3 4 4
4
3
1 1 2 2 
</code></pre>

<h5>Sample Output 1 :</h5>

<pre><code>4
1
</code></pre>

<h5>Explanation Of Sample Input 1 :</h5>

<pre><code>For test case 1 we have, 

To get a Rank 1, Ninja must have scored maximum marks in the class.

Hence, Ninja scored 4 marks.

For test case 2 we have,

Students with marks = 2 will achieve ranks 1 and 2 respectively.

Students with marks = 1 will achieve ranks 3 and 4 respectively.

So, Ninja scored 1 mark.
</code></pre>

<h5>Sample Input 2 :</h5>

<pre><code>3
2
1
20 9 
2
1
9 17 
7
2
9 6 0 2 20 10 5 
</code></pre>

<h5>Sample Output 2 :</h5>

<pre><code>20
17
10
</code></pre>
</div>
