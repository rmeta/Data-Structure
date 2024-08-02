<h2>Problem Description</h2>
<p>Hadi, who has not left the house for a long time due to the COVID-19 pandemic, has decided to spend his time working with arrays. He has recently introduced a new definition for arrays:</p>

<p>An array <code>a1, a2, ..., an</code> is considered well-formed if and only if the following two conditions are met:</p>
<ul>
    <li>For every even index <code>i</code>: <code>ai-1 ≤ ai</code></li>
    <li>For every odd index <code>i > 1</code>: <code>ai-1 ≥ ai</code></li>
</ul>
<p>Hadi wants to know if it is possible to rearrange the elements of an array of size <code>n</code> to make it well-formed. He has asked you to check this for him.</p>

<h2>Input</h2>
<p>The first line contains the integer <code>n</code> (the size of the array). The second line contains <code>n</code> integers <code>a1, a2, ..., an</code> representing the elements of the array.</p>

<h2>Output</h2>
<p>If it is not possible to rearrange the input array into a well-formed array, print the word <code>Impossible</code>. Otherwise, print one possible well-formed version of the input array. If multiple well-formed arrays are possible, you may print any of them.</p>

<h2>Constraints</h2>
<ul>
    <li><code>1 ≤ n ≤ 10^5</code></li>
    <li><code>1 ≤ ai ≤ 10^9</code></li>
</ul>

<h2>Examples</h2>

<h3>Example 1</h3>
<pre><code>Input:
5
1 6 4 3 3

Output:
1 6 3 4 3
</code></pre>

<p>In this example, one possible well-formed array is <code>[1, 6, 3, 4, 3]</code>.</p>
