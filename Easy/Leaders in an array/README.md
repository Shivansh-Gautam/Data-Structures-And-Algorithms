<h2><a href="https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=leaders-in-an-array">Leaders in an array</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array A of positive integers. Your task is to find the leaders in the array.&nbsp;<span class="selectable-text copyable-text" style="caret-color: #000000; white-space-collapse: preserve;">An element of the array is a leader if it is greater than all the elements to its right side or if it is equal to the maximum element on its right side</span>. The rightmost element is always a leader.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 6
A[] = {16,17,4,3,5,2}
<strong>Output: </strong>17 5 2<strong>
Explanation: </strong>The first leader is 17 
as it is greater than all the elements
to its right.&nbsp; Similarly, the next 
leader is 5. The right most element 
is always a leader so it is also 
included.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 5
A[] = {10,4,2,4,1}
<strong>Output: </strong>10 4 4 1<br><strong>Explanation:</strong> 1 is the rightmost element and 4 is the element which is greater<br>than all the elements to its right. Similarly another 4 is the element that is equal to the greatest element to its right and 10 is the greatest element in the whole array.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything.&nbsp;The task is to complete the function <strong>leader</strong>() which takes array A and n&nbsp;as input parameters and&nbsp;returns an array of leaders in order of their appearance.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong></span><span style="font-size: 18px;">&nbsp;O(n)</span><br><span style="font-size: 18px;"><strong>Expected Auxiliary Space:</strong>&nbsp;O(n)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n&nbsp;&lt;= 10<sup>7</sup><br>0 &lt;= A<sub>i</sub> &lt;= 10<sup>7</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Payu</code>&nbsp;<code>Adobe</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;