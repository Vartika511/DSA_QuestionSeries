<div _ngcontent-serverapp-c215="" class="description ng-star-inserted" style=""><h4 id="bob-is-out-to-buy-a-binary-string-of-size-n-the-shopkeeper-gave-him-an-integer-p-a-binary-string-s-and-defined-its-cost-as">Bob is out to buy a binary string of size ‘N’. The shopkeeper gave him an integer ‘P’, a binary string ‘S’ and defined its cost as :</h4>

<h4 id="cost-s-0-p-0-s-1-p-1-s-2-p-2-s-n-1-p-n-1">Cost = S[0] * (P^0) + S[1] * (P^1) + S[2] * (P^2) … S[N - 1] * (P^(n-1))</h4>

<h4 id="since-bob-was-an-old-customer-the-shopkeeper-allowed-him-to-do-exactly-two-operations-on-this-string-to-make-its-cost-as-low-as-possible">Since Bob was an old customer, the shopkeeper allowed him to do exactly two operations on this string to make its cost as low as possible.</h4>

<h4 id="in-each-operation-bob-can-select-any-index-and-flip-its-bit-i-e-if-it-was-0-it-will-become-1-or-vice-versa-bob-can-select-a-single-index-multiple-times">In each operation, Bob can select any index and flip its bit, i.e if it was ‘0’ it will become ‘1’ or vice versa. Bob can select a single index multiple times.</h4>

<h4 id="help-bob-find-the-final-string-with-minimum-possible-cost-after-performing-exactly-two-operations-on-the-given-string">Help Bob find the final string with minimum possible cost after performing exactly two operations on the given string.</h4>

<h5 id="input-format">Input Format:</h5>

<pre><code>The first line of input contains an integer ‘T’, denoting the number of test cases.

The first line of each test case contains two integers, ‘N’ and ‘P’, denoting the size of the binary string and the number given to Bob by the shopkeeper.

The next line contains a string ‘S’ of size ‘N’ denoting the string given to Bob by the shopkeeper.
</code></pre>

<h5 id="output-format">Output Format:</h5>

<pre><code>For each test case, print a string of size ‘N’ denoting the final string after performing exactly two operations.
</code></pre>

<h5 id="note">Note:</h5>

<pre><code>You are not required to print the expected output. It has already been taken care of. Just implement the function.
</code></pre>

<h5 id="constraints">Constraints:</h5>

<pre><code>1 &lt;= T &lt;= 5
1 &lt;= N &lt;= 10^5
2 &lt;= P &lt;= 10^9
0 &lt;= S[i] &lt;= 1

Time Limit: 1 sec
</code></pre>
</div>
<div _ngcontent-serverapp-c215="" class="description ng-star-inserted" style=""><h5>Sample Input 1:</h5>

<pre><code>2
5 5
00011
5 3
01101
</code></pre>

<h5>Sample Output 1:</h5>

<pre><code>00000
01000
</code></pre>

<h5>Explanation for Sample Input 1:</h5>

<pre><code>In the first test case, Bob can flip bits at last two indexes, making them ‘0’ thus reducing the whole cost to 0(0 * (5^0) + 0 * (5^1) + 0 * (5^2) + 0 * (5^3)  + 0 * (5^4)) which is the minimum possible. 

In the second test case, Bob can  flip the bits at index 2 and 4 , thus reducing the whole cost to 3(0 * (3^0) + 1 * (3^1) + 0 * (3^2) + 0 * (3^3)  + 0 * (3^4)) which is the minimum possible.
</code></pre>

<h5>Sample Input 2:</h5>

<pre><code>2
6 2
111111 
7 4
0000000
</code></pre>

<h5>Sample Output 2:</h5>

<pre><code>111100
0000000
</code></pre>
</div>
