<h2>Maximum Function Value with Binary Representation</h2>

<h3>Problem Description</h3>

<p>After defeating Asmonber (you replied to his message too late), Patrick is searching for his brain, which he lost before the competition!!! Patrick knows that he has an array <code>a</code> consisting of <code>n</code> integers (<code>a<sub>0</sub>, a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n−1</sub></code>) and a function <code>f(x)</code> whose maximum value is the address of his brain. Help him find the maximum value of the function <code>f(x)</code>.</p>

<p>The function <code>f(x)</code> takes a variable <code>x</code> and returns the following value:</p>

<pre><code>f(x) = ∑<sub>i=0</sub><sup>n−1</sup> a<sub>i</sub> * bit(x, i)</code></pre>

<p>where <code>bit(x, i)</code> denotes the <code>i-th</code> bit of the number <code>x</code>. Help Patrick find the maximum possible value of <code>f(x)</code>.</p>

<h3>Input</h3>

<ul>
  <li>The first line contains an integer <code>n</code>, the size of the array.</li>
  <li>The second line contains <code>n</code> integers representing the array <code>a</code>.</li>
  <li>The third line contains the binary representation of a number <code>m</code>, which represents the maximum value that <code>x</code> can take. This binary representation has exactly <code>n</code> bits and may include leading zeros.</li>
</ul>

<p>Constraints:</p>
<ul>
  <li><code>1 ≤ n ≤ 10<sup>5</sup></code></li>
  <li><code>|a<sub>i</sub>| ≤ 10<sup>9</sup></code></li>
  <li><code>0 ≤ m < 2<sup>n</sup></code></li>
</ul>

<h3>Output</h3>

<p>Print the binary representation of the number <code>x</code> (with exactly <code>n</code> bits) that maximizes the value of <code>f(x)</code>. If there are multiple such numbers, print the largest possible value of <code>x</code>. On the next line, print the maximum value of <code>f(x)</code>.</p>

<h3>Example</h3>

<h4>Input</h4>
<pre><code>
5
5 8 -3 6 9
10111
</code></pre>

<h4>Output</h4>
<pre><code>
01011
23
</code></pre>

<p>In this example, the binary number <code>01011</code> for <code>x</code> gives the maximum value of <code>f(x)</code>, which is 23.</p>
