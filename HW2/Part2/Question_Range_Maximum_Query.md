<h2>Range Maximum Query</h2>

<h3>Problem Description</h3>

<p>You are given an array of <code>n</code> integers. Erwin has queries to process, and you need to answer each query efficiently.</p>

<p>For each query, you are given a number <code>x</code>. Your task is to find the number of subarrays <code>[l, r]</code> where <code>x</code> is the maximum element.</p>

<h3>Input</h3>

<ul>
  <li>The first line contains an integer <code>n</code>, the size of the array.</li>
  <li>The second line contains <code>n</code> integers, which represent the elements of the array <code>a<sub>i</sub></code>.</li>
  <li>The third line contains an integer <code>q</code>, the number of queries.</li>
  <li>The next <code>q</code> lines each contain an integer <code>x<sub>i</sub></code>, representing the <code>i<sup>th</sup></code> query.</li>
</ul>

<p>Constraints:</p>
<ul>
  <li><code>1 ≤ n, q ≤ 10<sup>5</sup></code></li>
  <li><code>0 ≤ a<sub>i</sub>, x<sub>i</sub> ≤ 10<sup>9</sup></code></li>
</ul>

<h3>Output</h3>

<p>For each query, print the number of subarrays where the queried number <code>x</code> is the maximum.</p>

<h3>Example</h3>

<h4>Input</h4>
<pre><code>
4 4
1 2 3 3
1
2
3
4
</code></pre>

<h4>Output</h4>
<pre><code>
1
2
7
0
</code></pre>

<p>In this example:</p>
<ul>
  <li>The number 1 is the maximum in the subarray [1].</li>
  <li>The number 2 is the maximum in the subarrays [2] and [1, 2].</li>
  <li>The number 3 is the maximum in the remaining subarrays: [3], [2, 3], [1, 2, 3], and [1, 2, 3, 3].</li>
  <li>The number 4 is not the maximum in any subarray as it does not exist in the array.</li>
</ul>
