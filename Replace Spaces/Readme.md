<div _ngcontent-serverapp-c201="" class="description ng-star-inserted"><h4 id="you-have-been-given-a-string-39-str-39-of-words-you-need-to-replace-all-the-spaces-between-words-with-40">You have been given a string 'STR' of words. You need to replace all the spaces between words with “@40”.</h4>

<h5 id="input-format">Input Format:</h5>

<pre><code>The first line contains a single integer ‘T’ representing the number of test cases. 

The first line of each test case will contain a single string 'STR' consisting of one or more words. 
</code></pre>

<h5 id="output-format">Output Format:</h5>

<pre><code>For each test case, return the modified string after replacing all the spaces between words with “@40”.

Print the output of each test case in a separate line.
</code></pre>

<h5 id="note">Note:</h5>

<pre><code>You don’t need to print anything, It has already been taken care of. Just implement the given function.
</code></pre>

<h5 id="constraints">Constraints:</h5>

<pre><code>1 &lt;= T &lt;= 50
0 &lt;= |STR| &lt;= 100

Where ‘|STR|’ is the length of a particular string including spaces.

Time limit: 1 sec
</code></pre>
</div>
<div _ngcontent-serverapp-c201="" class="description ng-star-inserted"><h5>Sample Input 1:</h5>

<pre><code>2
Coding Ninjas Is A Coding Platform
Hello World
</code></pre>

<h5>Sample Output 1:</h5>

<pre><code>Coding@40Ninjas@40Is@40A@40Coding@40Platform
Hello@40World
</code></pre>

<h5>Explanation of Sample Output 1:</h5>

<pre><code>In test case 1, After replacing the spaces with “@40” string is: 

Coding@40Ninjas@40Is@40A@40Coding@40Platform

In test case 2, After replacing the spaces with “@40” string is: 

Hello@40World
</code></pre>

<h5>Sample Input 2:</h5>

<pre><code>3
Hello
I love coding
Coding Ninjas India
</code></pre>

<h5>Sample Output 2:</h5>

<pre><code>Hello
I@40love@40coding
Coding@40Ninjas@40India    
</code></pre>

<h5>Explanation for Sample Output 2:</h5>

<pre><code>In test case 1, After replacing the spaces with “@40” string is: 

Hello

In test case 2, After replacing the spaces with “@40” string is: 

I@40love@40coding

In test case 3, After replacing the spaces with “@40” string is: 

Coding@40Ninjas@40India
</code></pre>
</div>
