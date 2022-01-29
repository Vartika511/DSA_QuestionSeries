<div _ngcontent-serverapp-c200="" class="description ng-star-inserted"><h4 id="given-an-array-arr-of-integer-numbers-where-arr-i-represents-the-number-of-pages-in-the-i-th-book-there-are-m-number-of-students-and-the-task-is-to-allocate-all-the-books-to-their-students-allocate-books-in-such-a-way-that">Given an array ‘arr’ of integer numbers . where ‘arr[i]’ represents the number of pages in the ‘i-th’ book. There are  ‘m’ number of students and the task is to allocate all the books to their students. Allocate books in such a way that:</h4>

<h4 id="1-each-student-gets-at-least-one-book">1. Each student gets at least one book.</h4>

<h4 id="2-each-book-should-be-allocated-to-a-student">2. Each book should be allocated to a student.</h4>

<h4 id="3-book-allocation-should-be-in-a-contiguous-manner">3. Book allocation should be in a contiguous manner.</h4>

<h4 id="you-have-to-allocate-the-book-to-m-students-such-that-the-maximum-number-of-pages-assigned-to-a-student-is-minimum">You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum.</h4>

<h4 id="example">Example:</h4>

<h4 id="let-s-consider-n-4-number-of-books-and-m-2-number-of-students">Let’s consider ‘n=4’ (number of books ) and ‘m=2’ (number of students).</h4>

<h4 id="arr-10-20-30-40">‘arr = { 10, 20, 30, 40 }’.</h4>

<p><img src="https://files.codingninjas.in/screenshot-165-7147.png" alt="subsequence"></p>

<h4 id="all-possible-way-to-allocate-the-4-books-in-2-number-of-students-is">All possible way to allocate the ‘4’ books in ‘2’ number of students is -</h4>

<h4 id="10-20-30-40-sum-of-all-the-pages-of-books-which-allocated-to-student-1-is-10-and-student-2-is-20-30-40-90-so-maximum-is-max-10-90-90">10 | 20, 30, 40 - sum of all the pages of books which allocated to student-1  is ‘10’, and student-2 is ‘20+ 30+ 40 = 90’ so maximum is ‘max(10, 90)= 90’.</h4>

<h4 id="10-20-30-40-sum-of-all-the-pages-of-books-which-allocated-to-student-1-is-10-20-30-and-student-2-is-30-40-70-so-maximum-is-max-30-70-70">10, 20 | 30, 40 - sum of all the pages of books which allocated to student-1 is ‘10+ 20 = 30’, and student-2 is ‘30+ 40 = 70’ so maximum is ‘max(30, 70)= 70’.</h4>

<h4 id="10-20-30-40-sum-of-all-the-pages-of-books-which-allocated-to-student-1-is-10-20-30-60-and-student-2-is-40-so-maximum-is-max-60-40-60">10, 20, 30 | 40 - sum of all the pages of books which allocated to student-1 is ‘10+ 20 +30 = 60’, and student-2 is ‘40’ so maximum is ‘max(60, 40)= 60’.</h4>

<h4 id="so-possible-maximum-number-of-pages-which-allocated-to-a-single-student-is-90-70-60">So possible maximum number of pages which allocated to a single student is { 90, 70, 60 }.</h4>

<h4 id="but-you-have-to-return-a-minimum-of-this-so-return-min-90-70-60-60">But you have to return a minimum of this so return ‘min(90,70,60) =60’.</h4>

<h5 id="note">Note:</h5>

<pre><code>1. Do not print anything, just return the maximum number of pages that are assigned to a student is minimum.
2. If it is not possible to assign the ‘n’ books to ‘m’ students then return ‘-1’.
</code></pre>

<h5 id="input-format">Input format:</h5>

<pre><code>The first line of input contains an integer ‘T’ denoting the number of test cases.
The next ‘2*T’ lines represent the ‘T’ test cases.

The first line of each test case contains two space-separated integers ‘n’ denoting the number of books and ‘m’ denotes the number of students. 

The second line of each test case contains ‘n’ space-separated integers denoting the number of pages in each of ‘n’ books.
</code></pre>

<h5 id="output-format">Output Format</h5>

<pre><code>For each test case, return the minimum number of pages.
</code></pre>

<h5 id="constraints">Constraints:</h5>

<pre><code>1 &lt;= T &lt;= 50
2 &lt;= M &lt;= N &lt;= 10^3
1 &lt;= A[i] &lt;= 10^9
Sum of all A[i] do not more than 10^9.


Where ‘T’ is the total number of test cases, ‘N’ denotes the number of books and ‘M’ denotes the number of students. ‘A[i]’ denotes an element at position ‘i’ in the sequence.


Time limit: 1 second
</code></pre>
</div>
<div _ngcontent-serverapp-c200="" class="description ng-star-inserted"><h5>Sample Input 1:</h5>

<pre><code>2
4 2
12 34 67 90
4 4
5 17 100 11
</code></pre>

<h5>Sample Output 1:</h5>

<pre><code>113
100
</code></pre>

<h5>Explanation of sample input 1:</h5>

<pre><code>Test Case 1:

Let’s consider ‘n=4’ (number of books ) and ‘m=2’ (number of students)
‘arr = { 12, 34, 67, 90 }’. And ‘m= 2’.
All possible way to allocate the ‘4’ books in ‘2’ number of students is-

12 | 34, 67, 90 - sum of all the pages of books which allocated to student 1 is ‘12’, and student two is ‘34+ 67+ 90 = 191’ so maximum is ‘max(12, 191)= 191’.
12, 34 | 67, 90 - sum of all the pages of books which allocated to student 1 is ‘12+ 34 = 46’, and student two is ‘67+ 90 = 157’ so maximum is ‘max(46, 157)= 157’.
12, 34, 67 | 90 - sum of all the pages of books which allocated to student 1 is ‘12+ 34 +67 = 113’, and student two is ‘90’ so maximum is ‘max(113, 90)= 113’.

So possible maximum number of pages which allocated to a single student is { 191, 157, 113 } 
But you have to return a minimum of this so return ‘min(191,157, 113) =113’.

Hence answer is ‘113’.

Test Case 2:

‘arr = { 5, 17, 100, 11 }’. And ‘m=4’.
Only one is possible to allocate the ‘4’ books in ‘4’ student is 

5 | 17 | 100 | 11 - maximum is ‘max(5, 17, 100, 11)= 100’.

Hence answer is ‘100’.
</code></pre>

<h5>Sample Input 2:</h5>

<pre><code>2
5 4
25 46 28 49 24
3 2
10 10 20
</code></pre>

<h5>Sample Output 2:</h5>

<pre><code>71
20
</code></pre>
</div>
