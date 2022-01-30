<div _ngcontent-serverapp-c214="" class="description ng-star-inserted"><h4 id="ninja-took-you-to-an-apple-store-where-there-is-39-n-39-number-of-different-apples-present-in-the-store-and-ith-apple-cost-39-arr-i-39-coins-it-is-pre-decided-that-you-have-to-buy-all-of-them-you-would-be-given-a-coupon-by-ninja-that-allows-you-to-buy-m-apples-while-paying-only-for-39-m-1-39-most-expensive-apples-thus-you-will-get-the-cheapest-apple-for-free-you-can-use-the-coupon-once-only">Ninja took you to an apple store where there is 'N' number of different apples present in the store and ith apple cost 'ARR[i]' coins. It is pre-decided that you have to buy all of them. You would be given a coupon by Ninja that allows you to buy ‘M’ apples while paying only for 'M - 1' most expensive apples. Thus, you will get the cheapest apple for free. You can use the coupon once only.</h4>

<h4 id="now-ninja-requested-you-to-tell-the-minimum-total-coins-required-to-buy-all-apples-if-the-coupon-is-used-optimally-it-is-necessary-to-use-the-coupon-and-have-to-select-m-apples-for-using-it">Now, Ninja requested you to tell the minimum total coins required to buy all apples if the coupon is used optimally. It is necessary to use the coupon and have to select ‘M’ apples for using it.</h4>

<h5 id="example">EXAMPLE:</h5>

<pre><code>Input: 'N' = 5, ‘ARR’ = [5, 2, 4, 1, 3], ‘M’ = 3.
Output: 12
Explanation: We will select apples present in indices(1 based) 1, 3, and 5. So, we will get apple at index five for free. Thus, the total coins that should be paid are 5 + 2 + 4 + 1 = 12. 
</code></pre>

<h5 id="input-format">Input Format :</h5>

<pre><code>The first line of input contains an integer ‘T’, denoting the number of test cases. 

The first line of each test case contains two integers, ‘N’ and ‘M’, denoting the number of different apples and the coupon given to you.

The second line contains ‘N’ space-separated integers denoting the elements of array ‘ARR’.
</code></pre>

<h5 id="output-format">Output format :</h5>

<pre><code>For each test case, print an integer denoting the minimum total coins required to pay for the coupon if used optimally.

Print the output of each test case in a new line.
</code></pre>

<h5 id="note">Note :</h5>

<pre><code>You don’t need to print anything. It has already been taken care of. Just implement the given function.
</code></pre>

<h5 id="constraints">Constraints :</h5>

<pre><code>1 &lt;= ‘T’ &lt;= 10
1 &lt;= ‘M’ &lt;= ‘N’&lt;= 10^4
1 &lt;= ‘ARR[i]’ &lt;= 10^9

Time Limit: 1 sec
</code></pre>
</div>
<div _ngcontent-serverapp-c214="" class="description ng-star-inserted"><h5>Sample Input 1 :</h5>

<pre><code>2
2 2
3 2
4 2
2 3 1 5 
</code></pre>

<h5>Sample Output 1 :</h5>

<pre><code>3
8
</code></pre>

<h5>Explanation Of Sample Input 1 :</h5>

<pre><code>In the first test case, we will select both the apples. So, we will get apple at index two as free. Hence, the output is 3.

In the second test case, we will select apples present at indices 2 and 4. So, we will get apple at index two as free. Hence, the output is 2 + 1 + 5 = 8.
</code></pre>

<h5>Sample Input 2 :</h5>

<pre><code>2
7 4
10 34 12 14 54 12 15
4 3
1 1 1 1
</code></pre>

<h5>Sample Output 2 :</h5>

<pre><code>137
3
</code></pre>
</div>
