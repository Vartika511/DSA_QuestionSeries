<div _ngcontent-serverapp-c201="" class="description ng-star-inserted"><h4 id="you-are-given-a-string-39-s-39-your-task-is-to-check-whether-the-string-is-palindrome-or-not-for-checking-palindrome-consider-alphabets-and-numbers-only-and-ignore-the-symbols-and-whitespaces">You are given a string 'S'. Your task is to check whether the string is palindrome or not. For checking palindrome, consider alphabets and numbers only and ignore the symbols and whitespaces.</h4>

<h4 id="note">Note :</h4>

<pre><code>String 'S' is NOT case sensitive.
</code></pre>

<h4 id="example">Example :</h4>

<pre><code>Let S = “c1 O$d@eeD o1c”.
If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “c1odeedo1c”, which is a palindrome. Hence, the given string is also a palindrome.
</code></pre>

<h5 id="input-format">Input format :</h5>

<pre><code>The very first line of input contains an integer 'T' denoting the number of test cases. 

The first line of every test case contains the string 'S'.
</code></pre>

<h5 id="output-format">Output format :</h5>

<pre><code>For each test case, print “Yes” if 'S' is a palindrome, and “No” otherwise.

Print the output of each test case in a separate line.
</code></pre>

<h5 id="note">Note :</h5>

<pre><code>You do not need to print anything, it has already been taken care of. Just implement the given function.
</code></pre>

<h5 id="follow-up">Follow Up :</h5>

<pre><code>Can you solve the problem using O(1) space complexity?
</code></pre>

<h5 id="constraints">Constraints :</h5>

<pre><code>1 &lt;= T &lt;= 100 
1 &lt;= Length(S) &lt;= 10^4

Where 'T' denotes the number of test cases and 'S' denotes the given string.

Time Limit : 1 sec
</code></pre>
</div>
<div _ngcontent-serverapp-c201="" class="description ng-star-inserted"><h5>Sample Input 1 :</h5>

<pre><code>2
N2 i&amp;nJA?a&amp; jnI2n
A1b22Ba
</code></pre>

<h5>Sample Output 1 :</h5>

<pre><code>Yes
No
</code></pre>

<h5>Explanation 1 :</h5>

<pre><code>For the first test case, S = “N2 i&amp;nJA?a&amp; jnI2n”. If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “n2injaajni2n”, which is a palindrome. Hence, the given string is also a palindrome.

For the second test case, S = “A1b22Ba”. If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “a1b22ba”, which is not a palindrome. Hence, the given string is not a palindrome.
</code></pre>

<h5>Sample Input 2 :</h5>

<pre><code>3
codingninjassajNiNgNidoc
5?36@6?35
aaBBa@
</code></pre>

<h5>Sample Output 2 :</h5>

<pre><code>Yes
Yes
No
</code></pre>
</div>
