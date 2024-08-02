<h2>Problem Description</h2>
<p>Some time ago, a scholar received an email from an unknown university. In the email, there were first <code>n</code> strings <code>s1, s2, ..., sn</code>. Then, <code>q</code> strings <code>u1, u2, ..., uq</code> were provided.</p>

<p>The scholar was asked to check, for each string <code>ui</code> among <code>u1, u2, ..., uq</code>, whether there exists a string <code>sj</code> among <code>s1, s2, ..., sn</code> such that:</p>
<ul>
    <li>The length of <code>ui</code> and <code>sj</code> are equal.</li>
    <li><code>ui</code> and <code>sj</code> differ by exactly one character.</li>
</ul>

<p>The scholar asked Hadi for help with this task, but Hadi is still busy working on arrays. Therefore, the scholar is requesting your assistance in answering this question.</p>

<h2>Input</h2>
<p>The first line contains the integers <code>n</code> and <code>q</code>. This is followed by <code>n</code> lines, each containing a string <code>si</code>. After that, <code>q</code> lines follow, each containing a string <code>ui</code>.</p>

<h2>Output</h2>
<p>For each string <code>ui</code> among <code>u1, u2, ..., uq</code>, print "YES" if there exists a string <code>sj</code> that meets the criteria. Otherwise, print "NO".</p>

<h2>Constraints</h2>
<ul>
    <li><code>0 ≤ n ≤ 300,000</code></li>
    <li><code>0 ≤ q ≤ 300,000</code></li>
    <li>The total length of all strings does not exceed <code>600,000</code>.</li>
    <li>All strings are composed only of the characters 'a', 'b', and 'c'.</li>
</ul>

<h2>Examples</h2>

<h3>Example 1</h3>
<pre><code>Input:
5 4
ab
cacab
cbabc
acc
cacab
cacab
abc
aa
acbca
cb

Output:
YES
YES
NO
YES
</code></pre>

<p>Explanation:</p>
<p>Given the parameters, we have <code>s1, s2, s3, s4, s5 = [ab, acab, cbabc, acc, acab]</code> and <code>u1, u2, u3, u4 = [abc, aa, acbca, cb]</code>.</p>
<ul>
    <li><code>u1</code> and <code>s4</code> have the same length and differ by exactly one character.</li>
    <li><code>u2</code> and <code>s1</code>, <code>u4</code> and <code>s1</code> also meet the criteria.</li>
    <li>No string among <code>s1, s2, s3, s4, s5</code> meets the criteria with <code>u3</code>.</li>
</ul>
