<h1 align="center">📝 HTML Forms</h1>
<br>
<h2>Introduction</h2> 
<p> An <b> HTML form </b> is a section of a document which contains controls such as text fields, password fields, checkboxes, radio buttons, submit button, menus etc. An HTML form facilitates the user to enter data that is to be sent to the server for processing such as name, email address, password, phone number etc. </p>
<h3> Example: </h3>
<pre>
<code>&lt;html&gt;
&lt;body&gt;
&lt;h1&gt;HTML form&lt;/h1&gt;
&lt;form action="post"&gt;
    &lt;p&gt;
    &lt;label for="firstname"&gt;First name: &lt;/label&gt;
              &lt;input type="text" name="firstname"&gt;&lt;br&gt;
              &lt;br&gt;
    &lt;label for="lastname"&gt;Last name: &lt;/label&gt;
              &lt;input type="text" name="lastname"&gt;&lt;br&gt;
              &lt;br&gt;
    &lt;label for="email"&gt;E-mail: &lt;/label&gt;
              &lt;input type="text" id="E-mail"&gt;&lt;br&gt;
              &lt;br&gt;
    &lt;input type="radio" value="Male"&gt; Male&lt;br&gt;
    &lt;input type="radio" value="Female"&gt; Female&lt;br&gt;
    &lt;br&gt;
    &lt;input type="submit" value="Submit"&gt; &lt;input type="Reset"&gt;
    &lt;/p&gt;
 &lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;</code>
</pre>
<div>
    <img width="40%" alt="Form" src="https://www.htmlgoodies.com/wp-content/uploads/2021/04/HTML-Form.png">
</div>
<br>
<h2>Attributes</h2>
<p>The <input> element is a meaningful element and can be displayed differently by the attribute that we distribute to it: the “radio” attribute, the “text” attribute, the “submit.” “reset,” “e-mail,” “choose file,” “password.” Let’s take a few examples:</p>
<ul>
    <li>Radio button</li>
  <pre>
   <code>&lt;input type="radio" name="season"
     name="season" value="spring"&gt;</code>
  </pre>
    <li>Submit Buttom</li>
  <pre>
   <code>&lt;input type="submit" value="Submit"&gt;</code>
  </pre>
    <li>Reset Button</li>
  <pre>
   <code>&lt;input type="reset" value="Reset"&gt;</code>
  </pre>
    <li>Password</li>
  <pre>
   <code>&lt;input name="Password" value="password"&gt;</code>
  </pre>
    <li>CheckBox</li>
  <pre>
   <code>&lt;input type="checkbox" name="subscribeforupdates" name="subscribe" value="updates"&gt;
   &lt;label for="subscribe"&gt;Subscribe for updates?&lt;/label&gt;</code>
  </pre>
    <li>Email</li>
  <pre>
    <code>&lt;input type="email" id="email"&gt;</code> 
  </pre>
    <li>Range</li>
  <pre>
    <code>&lt;input type="range" id="volume" name="volume"min="0" max="11"&gt;</code> 
  </pre>
    <li>Date</li>
  <pre>
    <code>&lt;input type="date"id="bdaydate" name="bdaydate"&gt;</code> 
  </pre>
    <li>Month</li>
  <pre>
    <code>&lt;input type="month" id="bdaymonth" name="bdaymonth"&gt;</code> 
  </pre>
     <li>Color</li>
  <pre>
    <code>&lt;input type="color" id="favcolor" name="favcolor" value="#ff0000"&gt;</code> 
  </pre>
  </ul>
  <br>
  <h2>Textarea</h2>
  <p>The <b> <textarea> </b> element defines a text area,We can even define how many lines to be available through the row attribute, specify a visible number in an area and through the cols attribute, specify the visible width of the text area.</p>
  <pre><code>&lt;html&gt;
&lt;body&gt;
&lt;h1&gt;  Textarea element&lt;/h1&gt;
&lt;form action="/action_page.php"&gt;
  &lt;textarea name="textarea" rows="12" cols="45" &gt;write something here&lt;/textarea&gt;
  &lt;br&gt;
  &lt;input type="submit"&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;</code></pre>
<div>
    <img width="40%" alt="TextArea" src="https://www.htmlgoodies.com/wp-content/uploads/2021/04/Textarea.png">
</div>
<h2>The list attribute</h2>
<p>The list attribute identifies a list of predefined options to suggest the user what to choose.</p>
<pre><code>&lt;html&gt;
&lt;body&gt;
&lt;h1&gt;The List attribute&lt;/h1&gt;
&lt;form&gt;
 &lt;label for="tennis player"&gt;Favorite tennis player?&lt;/label&gt;&lt;br&gt;
 &lt;input name="tennis" name="tennis" list="names"&gt;
&lt;datalist id="names"&gt;
 &lt;option&gt;Roger Federer&lt;/option&gt;
 &lt;option&gt;Stan Wawrinka&lt;/option&gt; 
 &lt;option&gt;Alexander Zverev&lt;/option&gt; 
 &lt;option&gt;Rafael Nadal&lt;/option&gt; 
 &lt;option&gt;Juan Martin del Potro&lt;/option&gt; 
 &lt;option&gt;Novak Djokovic&lt;/option&gt; 
 &lt;option&gt;Kei Nishikori&lt;/option&gt; 
 &lt;option&gt;Milos Raonic&lt;/option&gt; 
 &lt;option&gt;Marin Čilić&lt;/option&gt; 
&lt;/datalist&gt;
&lt;input type="submit"&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;</code></pre>
<div>
    <img width="40%" alt="listAttribute" src="https://www.htmlgoodies.com/wp-content/uploads/2021/04/list-attribute.png">
</div>
<h2>Select Elements</h2>
<p>The select element allows users to choose between multiple options from a selected list,Depending on the value of this multiple attribute, the behavior of this element changes substantially.</p>
<pre><code>&lt;html&gt;
&lt;body&gt;
&lt;h1&gt;The Select element&lt;/h1&gt;
&lt;p&gt;A drop-down list:&lt;/p&gt;
&lt;form action="../form-result.php" target="_blank"&gt;
  &lt;p&gt;
   Favorite sport:
    &lt;select name="sport"&gt;
      &lt;option&gt;Football&lt;/option&gt;
      &lt;option&gt;Tennis&lt;/option&gt;
      &lt;option&gt;Basketball&lt;/option&gt;
      &lt;option&gt;Swimming&lt;/option&gt;
      &lt;option&gt;Voley-ball&lt;/option&gt;
    &lt;/select&gt;
    &lt;input type="submit" value="Submit"&gt;
  &lt;/p&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;</code></pre>
<div>
    <img width="40%" alt="SelectElement" src="https://www.htmlgoodies.com/wp-content/uploads/2021/04/select-element.png">
</div>
