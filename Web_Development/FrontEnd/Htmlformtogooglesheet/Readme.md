# 📕 Frond End Web Dev 📕

## 1️⃣ HTML

- [x] Html form to google sheets

<hr>

**The basic idea is to connect our html forms to google sheet . The below written documentation clears the whole concept behind it**

<hr>

# HTML CODE

The below Frontend document contains the **html** file which basically contains a **UI** of our form

The form is divided in to sections called:-

- ![#1589F0](https://via.placeholder.com/15/1589F0/000000?text=+) `Name`
- ![#1589F0](https://via.placeholder.com/15/1589F0/000000?text=+) `Email`
- ![#1589F0](https://via.placeholder.com/15/1589F0/000000?text=+) `Message`
- ![#1589F0](https://via.placeholder.com/15/1589F0/000000?text=+) `Timestamp`
- ![#1589F0](https://via.placeholder.com/15/1589F0/000000?text=+) `Phone number`

**Here is the UI code**
<div style="background: #111111; overflow:auto;width:auto;border:solid gray;border-width:.1em .1em .1em .8em;padding:.2em .6em;"><pre style="margin: 0; line-height: 125%"><span style="color: #ffffff">&lt;!DOCTYPE</span> <span style="color: #ffffff">html&gt;</span>
<span style="color: #ffffff">&lt;html</span> <span style="color: #ffffff">lang=</span><span style="color: #0086d2">&quot;en&quot;</span><span style="color: #ffffff">&gt;</span>
<span style="color: #ffffff">&lt;head&gt;</span>
    <span style="color: #ffffff">&lt;meta</span> <span style="color: #ffffff">charset=</span><span style="color: #0086d2">&quot;UTF-8&quot;</span> <span style="color: #ffffff">/&gt;</span>
    <span style="color: #ffffff">&lt;meta</span> <span style="color: #ffffff">name=</span><span style="color: #0086d2">&quot;viewport&quot;</span> <span style="color: #ffffff">content=</span><span style="color: #0086d2">&quot;width=device-width, initial-scale=1.0&quot;</span> <span style="color: #ffffff">/&gt;</span>
    <span style="color: #ffffff">&lt;title&gt;Document&lt;/title&gt;</span>
    <span style="color: #ffffff">&lt;link</span> <span style="color: #ffffff">href=</span><span style="color: #0086d2">&quot;https://cdn.jsdelivr.net/npm/bootstrap@5.1.1/dist/css/bootstrap.min.css&quot;</span> <span style="color: #ffffff">rel=</span><span style="color: #0086d2">&quot;stylesheet&quot;</span> <span style="color: #ffffff">integrity=</span><span style="color: #0086d2">&quot;sha384-F3w7mX95PdgyTmZZMECAngseQB83DfGTowi0iMjiWaeVhAn4FJkqJByhZMI3AhiU&quot;</span> <span style="color: #ffffff">crossorigin=</span><span style="color: #0086d2">&quot;anonymous&quot;</span><span style="color: #ffffff">&gt;</span>
    <span style="color: #ffffff">&lt;style&gt;</span>
        <span style="color: #ffffff">.form-new</span> <span style="color: #ffffff">{</span>
            <span style="color: #ffffff">margin-right:</span> <span style="color: #0086f7; font-weight: bold">22</span><span style="color: #ffffff">%;</span>
            <span style="color: #ffffff">margin-left:</span> <span style="color: #0086f7; font-weight: bold">20</span><span style="color: #ffffff">%;</span>
        <span style="color: #ffffff">}</span>
        <span style="color: #ffffff">.heading</span> <span style="color: #ffffff">{</span>
            <span style="color: #ffffff">width:</span> <span style="color: #0086f7; font-weight: bold">150</span><span style="color: #ffffff">%;</span>
            <span style="color: #ffffff">display:</span> <span style="color: #ffffff">flex;</span>
            <span style="color: #ffffff">justify-content:</span> <span style="color: #ffffff">center;</span>
            <span style="color: #ffffff">align-items:</span> <span style="color: #ffffff">center;</span>
            <span style="color: #ffffff">color:</span> <span style="color: #008800; font-style: italic; background-color: #0f140f">#e9ecef;</span>
            <span style="color: #ffffff">font-size:</span> <span style="color: #0086f7; font-weight: bold">45</span><span style="color: #ffffff">px;</span>
            <span style="color: #ffffff">font-family:</span> <span style="color: #ffffff">Arial,</span> <span style="color: #ffffff">Helvetica,</span> <span style="color: #ffffff">sans-serif;</span>
        <span style="color: #ffffff">}</span>
        <span style="color: #ffffff">.register</span> <span style="color: #ffffff">{</span>
            <span style="color: #ffffff">background:</span> <span style="color: #ffffff">linear-gradient(</span><span style="color: #0086f7; font-weight: bold">162.29</span><span style="color: #ffffff">deg,</span> <span style="color: #ffffff">rgba(</span><span style="color: #0086f7; font-weight: bold">62</span><span style="color: #ffffff">,</span> <span style="color: #0086f7; font-weight: bold">60</span><span style="color: #ffffff">,</span> <span style="color: #0086f7; font-weight: bold">88</span><span style="color: #ffffff">,</span> <span style="color: #0086f7; font-weight: bold">0.64</span><span style="color: #ffffff">)</span> <span style="color: #0086f7; font-weight: bold">0.99</span><span style="color: #ffffff">%,</span> <span style="color: #ffffff">rgba(</span><span style="color: #0086f7; font-weight: bold">23</span><span style="color: #ffffff">,</span> <span style="color: #0086f7; font-weight: bold">22</span><span style="color: #ffffff">,</span> <span style="color: #0086f7; font-weight: bold">40</span><span style="color: #ffffff">,</span> <span style="color: #0086f7; font-weight: bold">0</span><span style="color: #ffffff">)</span> <span style="color: #0086f7; font-weight: bold">179.83</span><span style="color: #ffffff">%);</span>
            <span style="color: #ffffff">border-radius:</span> <span style="color: #0086f7; font-weight: bold">20</span><span style="color: #ffffff">px;</span>
            <span style="color: #ffffff">box-sizing:</span> <span style="color: #ffffff">border-box;</span>
            <span style="color: #ffffff">margin-top:</span> <span style="color: #0086f7; font-weight: bold">3</span><span style="color: #ffffff">%;</span>
            <span style="color: #ffffff">padding:</span> <span style="color: #0086f7; font-weight: bold">3</span><span style="color: #ffffff">%;</span>
        <span style="color: #ffffff">}</span>
        <span style="color: #ffffff">.centerheading{</span>
            <span style="color: #ffffff">font-size:</span> <span style="color: #0086f7; font-weight: bold">30</span><span style="color: #ffffff">px;</span>
            <span style="color: #ffffff">display:</span> <span style="color: #ffffff">flex;</span>
            <span style="color: #ffffff">justify-content:</span> <span style="color: #ffffff">center;</span>  
        <span style="color: #ffffff">}</span>
    <span style="color: #ffffff">&lt;/style&gt;</span>
<span style="color: #ffffff">&lt;/head&gt;</span>
<span style="color: #ffffff">&lt;body&gt;</span>
    <span style="color: #ffffff">&lt;nav</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;navbar navbar-dark bg-dark&quot;</span><span style="color: #ffffff">&gt;</span>
      <span style="color: #ffffff">&lt;div</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;container-fluid&quot;</span><span style="color: #ffffff">&gt;</span>
        <span style="color: #ffffff">&lt;a</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;navbar-brand&quot;</span> <span style="color: #ffffff">href=</span><span style="color: #0086d2">&quot;https://docs.google.com/spreadsheets/d/1owGzJeJTi-7V40Xi_7GgYHtdmZrIYVEpnA92yYP3VrY/edit#gid=0&quot;</span><span style="color: #ffffff">&gt;Html</span> <span style="color: #ffffff">to</span> <span style="color: #ffffff">Google</span> <span style="color: #ffffff">sheets&lt;/a&gt;</span>
      <span style="color: #ffffff">&lt;/div&gt;</span>
    <span style="color: #ffffff">&lt;/nav&gt;</span>
    <span style="color: #ffffff">&lt;div</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;container register&quot;</span><span style="color: #ffffff">&gt;</span>
        <span style="color: #ffffff">&lt;div</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;row&quot;</span><span style="color: #ffffff">&gt;</span>
            <span style="color: #ffffff">&lt;div</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;col-md-12&quot;</span><span style="color: #ffffff">&gt;</span>
                <span style="color: #ffffff">&lt;div</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;tab-pane fade show active text-align form-new&quot;</span> <span style="color: #ffffff">id=</span><span style="color: #0086d2">&quot;home&quot;</span> <span style="color: #ffffff">role=</span><span style="color: #0086d2">&quot;tabpanel&quot;</span>
                    <span style="color: #ffffff">aria-labelledby=</span><span style="color: #0086d2">&quot;home-tab&quot;</span><span style="color: #ffffff">&gt;</span>
                    <span style="color: #ffffff">&lt;div</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;shadow-lg p-3 mb-5 bg-body rounded &quot;</span><span style="color: #ffffff">&gt;</span>
                       <span style="color: #ffffff">&lt;section</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;centerheading&quot;</span><span style="color: #ffffff">&gt;Html</span> <span style="color: #ffffff">data</span> <span style="color: #ffffff">to</span> <span style="color: #ffffff">google</span> <span style="color: #ffffff">sheet&lt;/section&gt;&lt;/div&gt;</span>
                    <span style="color: #ffffff">&lt;div</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;row register-form&quot;</span><span style="color: #ffffff">&gt;</span>
                        <span style="color: #ffffff">&lt;div</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;col-md-12&quot;</span><span style="color: #ffffff">&gt;</span>
                            <span style="color: #ffffff">&lt;form</span> <span style="color: #ffffff">method=</span><span style="color: #0086d2">&quot;post&quot;</span> <span style="color: #ffffff">autocomplete=</span><span style="color: #0086d2">&quot;off&quot;</span> <span style="color: #ffffff">name=</span><span style="color: #0086d2">&quot;google-sheet&quot;</span><span style="color: #ffffff">&gt;</span>
                                <span style="color: #ffffff">&lt;div</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;form-group&quot;</span><span style="color: #ffffff">&gt;</span>
                                    <span style="color: #ffffff">&lt;div</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;input-group mb-3&quot;</span><span style="color: #ffffff">&gt;</span>
                                      <span style="color: #ffffff">&lt;input</span> <span style="color: #ffffff">type=</span><span style="color: #0086d2">&quot;text&quot;</span> <span style="color: #ffffff">name=</span><span style="color: #0086d2">&quot;Name&quot;</span>   <span style="color: #ffffff">value=</span><span style="color: #0086d2">&quot;&quot;</span> <span style="color: #ffffff">required=</span><span style="color: #0086d2">&quot;&quot;</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;form-control&quot;</span> <span style="color: #ffffff">placeholder=</span><span style="color: #0086d2">&quot;Recipient&#39;s username&quot;</span> <span style="color: #ffffff">aria-label=</span><span style="color: #0086d2">&quot;Recipient&#39;s username&quot;</span> <span style="color: #ffffff">aria-describedby=</span><span style="color: #0086d2">&quot;basic-addon2&quot;</span><span style="color: #ffffff">&gt;</span>
                                      <span style="color: #ffffff">&lt;span</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;input-group-text&quot;</span> <span style="color: #ffffff">id=</span><span style="color: #0086d2">&quot;basic-addon2&quot;</span><span style="color: #ffffff">&gt;Your</span> <span style="color: #ffffff">name</span> <span style="color: #ffffff">&lt;/span&gt;</span>
                                    <span style="color: #ffffff">&lt;/div&gt;</span>
                                <span style="color: #ffffff">&lt;/div&gt;</span>
                                <span style="color: #ffffff">&lt;div</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;form-group&quot;</span><span style="color: #ffffff">&gt;</span>
                                    <span style="color: #ffffff">&lt;div</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;input-group mb-3&quot;</span><span style="color: #ffffff">&gt;</span>
                                      <span style="color: #ffffff">&lt;input</span> <span style="color: #ffffff">type=</span><span style="color: #0086d2">&quot;text&quot;</span> <span style="color: #ffffff">name=</span><span style="color: #0086d2">&quot;Email&quot;</span>  <span style="color: #ffffff">value=</span><span style="color: #0086d2">&quot;&quot;</span> <span style="color: #ffffff">required=</span><span style="color: #0086d2">&quot;&quot;</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;form-control&quot;</span><span style="color: #ffffff">placeholder=</span><span style="color: #0086d2">&quot;Your Email *&quot;</span> <span style="color: #ffffff">aria-label=</span><span style="color: #0086d2">&quot;Recipient&#39;s username&quot;</span> <span style="color: #ffffff">aria-describedby=</span><span style="color: #0086d2">&quot;basic-addon2&quot;</span><span style="color: #ffffff">&gt;</span>
                                      <span style="color: #ffffff">&lt;span</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;input-group-text&quot;</span> <span style="color: #ffffff">id=</span><span style="color: #0086d2">&quot;basic-addon2&quot;</span><span style="color: #ffffff">&gt;@gmail.com&lt;/span&gt;</span>
                                    <span style="color: #ffffff">&lt;/div&gt;</span>
                               <span style="color: #ffffff">&lt;img</span> <span style="color: #ffffff">src=</span><span style="color: #0086d2">&quot;./Googlesheet.png&quot;</span> <span style="color: #ffffff">alt=</span><span style="color: #0086d2">&quot;&quot;</span><span style="color: #ffffff">&gt;</span>
                                <span style="color: #ffffff">&lt;/div&gt;</span>
                                <span style="color: #ffffff">&lt;div</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;form-group&quot;</span><span style="color: #ffffff">&gt;</span>
                                    <span style="color: #ffffff">&lt;input</span> <span style="color: #ffffff">type=</span><span style="color: #0086d2">&quot;number&quot;</span> <span style="color: #ffffff">name=</span><span style="color: #0086d2">&quot;Phone&quot;</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;form-control&quot;</span>
                                        <span style="color: #ffffff">placeholder=</span><span style="color: #0086d2">&quot;Your Contact Number *&quot;</span> <span style="color: #ffffff">value=</span><span style="color: #0086d2">&quot;&quot;</span> <span style="color: #ffffff">required=</span><span style="color: #0086d2">&quot;&quot;</span> <span style="color: #ffffff">/&gt;</span>
                                <span style="color: #ffffff">&lt;/div&gt;</span>
                                 <span style="color: #ffffff">&lt;div</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;form-group&quot;</span><span style="color: #ffffff">&gt;</span>
                                    <span style="color: #ffffff">&lt;div</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;input-group mb-3&quot;</span><span style="color: #ffffff">&gt;</span>
                                      <span style="color: #ffffff">&lt;input</span> <span style="color: #ffffff">type=</span><span style="color: #0086d2">&quot;text&quot;</span> <span style="color: #ffffff">name=</span><span style="color: #0086d2">&quot;Message&quot;</span>   <span style="color: #ffffff">value=</span><span style="color: #0086d2">&quot;&quot;</span> <span style="color: #ffffff">required=</span><span style="color: #0086d2">&quot;&quot;</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;form-control my-3&quot;</span> <span style="color: #ffffff">placeholder=</span><span style="color: #0086d2">&quot;Enter the message&quot;</span> <span style="color: #ffffff">aria-label=</span><span style="color: #0086d2">&quot;Recipient&#39;s username&quot;</span> <span style="color: #ffffff">aria-describedby=</span><span style="color: #0086d2">&quot;basic-addon2&quot;</span><span style="color: #ffffff">&gt;</span>
                                    <span style="color: #ffffff">&lt;/div&gt;</span>
                                <span style="color: #ffffff">&lt;/div&gt;</span>
                                <span style="color: #ffffff">&lt;div</span> <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;form-group&quot;</span><span style="color: #ffffff">&gt;</span>
                                    <span style="color: #ffffff">&lt;button</span> <span style="color: #ffffff">type=</span><span style="color: #0086d2">&quot;submit&quot;</span> <span style="color: #ffffff">name=</span><span style="color: #0086d2">&quot;submit&quot;</span>  <span style="color: #ffffff">class=</span><span style="color: #0086d2">&quot;btn btn-outline-success my-5 btn-lg&quot;</span><span style="color: #ffffff">&gt;Success&lt;/button&gt;</span>
                                <span style="color: #ffffff">&lt;/div&gt;</span>                           
                            <span style="color: #ffffff">&lt;/form&gt;</span>
                        <span style="color: #ffffff">&lt;/div&gt;</span>
                    <span style="color: #ffffff">&lt;/div&gt;</span>
                <span style="color: #ffffff">&lt;/div&gt;</span>
            <span style="color: #ffffff">&lt;/div&gt;</span>
        <span style="color: #ffffff">&lt;/div&gt;</span>
    <span style="color: #ffffff">&lt;/div&gt;</span>
    <span style="color: #ffffff">&lt;script&gt;</span>
        <span style="color: #ffffff">const</span> <span style="color: #ffffff">scriptURL</span> <span style="color: #ffffff">=</span>
            <span style="color: #0086d2">&quot;https://script.google.com/macros/s/AKfycbxFnHqHV20SQOIIO3jyBYcxGb2Pv2l90Xpu0u_tEN3opfMMAAdry6ShlyIEfoaS3K-jBw/exec&quot;</span><span style="color: #ffffff">;</span>
        <span style="color: #ffffff">const</span> <span style="color: #ffffff">form</span> <span style="color: #ffffff">=</span> <span style="color: #ffffff">document.forms[</span><span style="color: #0086d2">&quot;google-sheet&quot;</span><span style="color: #ffffff">];</span>
        <span style="color: #ffffff">form.addEventListener(</span><span style="color: #0086d2">&quot;submit&quot;</span><span style="color: #ffffff">,</span> <span style="color: #ffffff">(e)</span> <span style="color: #ffffff">=&gt;</span> <span style="color: #ffffff">{</span>
            <span style="color: #ffffff">e.preventDefault();</span>
            <span style="color: #ffffff">fetch(scriptURL,</span> <span style="color: #ffffff">{</span> <span style="color: #ffffff">method:</span> <span style="color: #0086d2">&quot;POST&quot;</span><span style="color: #ffffff">,</span> <span style="color: #ffffff">body:</span> <span style="color: #ffffff">new</span> <span style="color: #ffffff">FormData(form)</span> <span style="color: #ffffff">})</span>
                <span style="color: #ffffff">.then((response)</span> <span style="color: #ffffff">=&gt;</span> <span style="color: #ffffff">alert(</span><span style="color: #0086d2">&quot;Thanks for fiiling the form&quot;</span><span style="color: #ffffff">))</span>
                <span style="color: #ffffff">.catch((error)</span> <span style="color: #ffffff">=&gt;</span> <span style="color: #ffffff">console.error(</span><span style="color: #0086d2">&quot;Error!&quot;</span><span style="color: #ffffff">,</span> <span style="color: #ffffff">error.message));</span>
        <span style="color: #ffffff">});</span>
    <span style="color: #ffffff">&lt;/script&gt;</span>
    <span style="color: #ffffff">&lt;script</span> <span style="color: #ffffff">src=</span><span style="color: #0086d2">&quot;https://maxcdn.bootstrapcdn.com/bootstrap/4.1.1/js/bootstrap.min.js&quot;</span><span style="color: #ffffff">&gt;&lt;/script&gt;</span>
    <span style="color: #ffffff">&lt;script</span> <span style="color: #ffffff">src=</span><span style="color: #0086d2">&quot;https://cdnjs.cloudflare.com/ajax/libs/jquery/3.2.1/jquery.min.js&quot;</span><span style="color: #ffffff">&gt;&lt;/script&gt;</span>
<span style="color: #ffffff">&lt;/body&gt;</span>
<span style="color: #ffffff">&lt;/html&gt;</span>
</pre></div>


<hr>

**Which basically looks like this :-**
<br>

**Front Page UI**

![Front Page UI](./FrontformUI.png)

# Javasript code

The below mention code which links the form with the html forms
<br>

**Here is the javascript code**
<!-- HTML generated using hilite.me --><div style="background: #111111; overflow:auto;width:auto;border:solid gray;border-width:.1em .1em .1em .8em;padding:.2em .6em;"><pre style="margin: 0; line-height: 125%"><span style="color: #ffffff">var</span> <span style="color: #ffffff">GooglesheetName</span> <span style="color: #ffffff">=</span> <span style="color: #0086d2">&quot;Sheet1&quot;</span><span style="color: #ffffff">;</span>
<span style="color: #ffffff">var</span> <span style="color: #ffffff">scriptProp</span> <span style="color: #ffffff">=</span> <span style="color: #ffffff">PropertiesService.getScriptProperties();</span>
<span style="color: #ffffff">function</span> <span style="color: #ffffff">intialSetup()</span> <span style="color: #ffffff">{</span>
  <span style="color: #ffffff">var</span> <span style="color: #ffffff">activeSpreadsheet</span> <span style="color: #ffffff">=</span> <span style="color: #ffffff">SpreadsheetApp.getActiveSpreadsheet();</span>
  <span style="color: #ffffff">scriptProp.setProperty(</span><span style="color: #0086d2">&quot;key&quot;</span><span style="color: #ffffff">,</span> <span style="color: #ffffff">activeSpreadsheet.getId());</span>
<span style="color: #ffffff">}</span>
<span style="color: #ffffff">function</span> <span style="color: #ffffff">doPost(e)</span> <span style="color: #ffffff">{</span>
  <span style="color: #ffffff">var</span> <span style="color: #ffffff">lock</span> <span style="color: #ffffff">=</span> <span style="color: #ffffff">LockService.getScriptLock();</span>
  <span style="color: #ffffff">lock.tryLock(</span><span style="color: #0086f7; font-weight: bold">10000</span><span style="color: #ffffff">);</span>
  <span style="color: #fb660a; font-weight: bold">try</span> <span style="color: #ffffff">{</span>
    <span style="color: #ffffff">var</span> <span style="color: #ffffff">doc</span> <span style="color: #ffffff">=</span> <span style="color: #ffffff">SpreadsheetApp.openById(scriptProp.getProperty(</span><span style="color: #0086d2">&quot;key&quot;</span><span style="color: #ffffff">));</span>
    <span style="color: #ffffff">var</span> <span style="color: #ffffff">sheet</span> <span style="color: #ffffff">=</span> <span style="color: #ffffff">doc.getSheetByName(GooglesheetName);</span>
    <span style="color: #ffffff">var</span> <span style="color: #ffffff">headers</span> <span style="color: #ffffff">=</span> <span style="color: #ffffff">sheet.getRange(</span><span style="color: #0086f7; font-weight: bold">1</span><span style="color: #ffffff">,</span> <span style="color: #0086f7; font-weight: bold">1</span><span style="color: #ffffff">,</span> <span style="color: #0086f7; font-weight: bold">1</span><span style="color: #ffffff">,</span> <span style="color: #ffffff">sheet.getLastColumn()).getValues()[</span><span style="color: #0086f7; font-weight: bold">0</span><span style="color: #ffffff">];</span>
    <span style="color: #ffffff">var</span> <span style="color: #ffffff">nextRow</span> <span style="color: #ffffff">=</span> <span style="color: #ffffff">sheet.getLastRow()</span> <span style="color: #ffffff">+</span> <span style="color: #0086f7; font-weight: bold">1</span><span style="color: #ffffff">;</span>
    <span style="color: #ffffff">var</span> <span style="color: #ffffff">newRow</span> <span style="color: #ffffff">=</span> <span style="color: #ffffff">headers.map(function</span> <span style="color: #ffffff">(header)</span> <span style="color: #ffffff">{</span>
      <span style="color: #fb660a; font-weight: bold">return</span> <span style="color: #ffffff">header</span> <span style="color: #ffffff">===</span> <span style="color: #0086d2">&quot;timestamp&quot;</span> <span style="color: #ffffff">?</span> <span style="color: #ffffff">new</span> <span style="color: #ffffff">Date()</span> <span style="color: #ffffff">:</span> <span style="color: #ffffff">e.parameter[header];</span>
    <span style="color: #ffffff">});</span>
    <span style="color: #ffffff">sheet.getRange(nextRow,</span> <span style="color: #0086f7; font-weight: bold">1</span><span style="color: #ffffff">,</span> <span style="color: #0086f7; font-weight: bold">1</span><span style="color: #ffffff">,</span> <span style="color: #ffffff">newRow.length).setValues([newRow]);</span>
    <span style="color: #fb660a; font-weight: bold">return</span> <span style="color: #ffffff">ContentService.createTextOutput(</span>
      <span style="color: #ffffff">JSON.stringify({</span> <span style="color: #ffffff">result:</span> <span style="color: #0086d2">&quot;success&quot;</span><span style="color: #ffffff">,</span> <span style="color: #ffffff">row:</span> <span style="color: #ffffff">nextRow</span> <span style="color: #ffffff">})</span>
    <span style="color: #ffffff">).setMimeType(ContentService.MimeType.JSON);</span>
  <span style="color: #ffffff">}</span> <span style="color: #ffffff">catch</span> <span style="color: #ffffff">(e)</span> <span style="color: #ffffff">{</span>
    <span style="color: #fb660a; font-weight: bold">return</span> <span style="color: #ffffff">ContentService.createTextOutput(</span>
      <span style="color: #ffffff">JSON.stringify({</span> <span style="color: #ffffff">result:</span> <span style="color: #0086d2">&quot;error&quot;</span><span style="color: #ffffff">,</span> <span style="color: #ffffff">error:</span> <span style="color: #ffffff">e</span> <span style="color: #ffffff">})</span>
    <span style="color: #ffffff">).setMimeType(ContentService.MimeType.JSON);</span>
  <span style="color: #ffffff">}</span> <span style="color: #fb660a; font-weight: bold">finally</span> <span style="color: #ffffff">{</span>
    <span style="color: #ffffff">lock.releaseLock();</span>
  <span style="color: #ffffff">}</span>
<span style="color: #ffffff">}</span>
</pre></div>





<hr>

**Google Sheet**

![Google Sheet](./Googlesheet.png)

# How to link it with the HTML Forms ?

1.Make the UI of your form with a proper HTML and CSS <br/>

<hr/>
2. Go to the Google sheet and make the Info tags you want like(Names, Message ,Email...etc) its upon you How many tags you  want to make <br/>
<hr/>
3. Go to **tools** option in the above menu and select the **Script editor** menu a new tab will pop up <br/>
<hr/>
4. Give the name of your project and embed your javascript file there what you want to add  <br/>
<hr>
5. Afterwards go to **Deploy menu** and select **Web App** and press Deploy button then copy the url you get <br>
<hr>
6. After its require some permissions give  to it and your form gets ready to work 
<br>
