<h2>Max GCD with Additional Marbles</h2>

<h3>Problem Description</h3>

<p>Pat has <code>n</code> bags, each containing some marbles. He has <code>k</code> additional marbles that he hasn't put into the bags yet. He wants to add some of these marbles (possibly none) to the bags in such a way that the greatest common divisor (GCD) of the number of marbles in the bags is maximized. Note that he does not want to move the marbles that are already in the bags. Since Pat lacks the intelligence to do this on his own, he has asked for your help. Can you assist him?</p>

<h3>Input</h3>

<ul>
  <li>The first line contains two integers, <code>n</code> and <code>k</code>.</li>
  <li>The second line contains <code>n</code> integers, where the <code>i-th</code> integer represents the initial number of marbles in the <code>i-th</code> bag.</li>
</ul>

<p>Constraints:</p>
<ul>
  <li><code>1 ≤ n, k, a<sub>i</sub> ≤ 1000</code></li>
</ul>

<h3>Output</h3>

<p>Print a single integer representing the maximum possible greatest common divisor after adding at most <code>k</code> marbles.</p>

<h3>Example</h3>

<h4>Input</h4>
<pre><code>
3 3
3 4 2
</code></pre>

<h4>Output</h4>
<pre><code>
4
</code></pre>

<p>In this example, you can add one marble to the first bag and two marbles to the third bag. After this, all bags will have four marbles, and their GCD will be 4.</p>

<h4>Input</h4>
<pre><code>
3 7
12 21 46
</code></pre>

<h4>Output</h4>
<pre><code>
12
</code></pre>

<p>In this example, you can add three marbles to the second bag and two marbles to the third bag. After this, the maximum possible GCD will be 12.</p>

