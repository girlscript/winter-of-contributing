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
<div style="background: #272822; overflow:auto;width:auto;border:solid gray;border-width:.1em .1em .1em .8em;padding:.2em .6em;"><pre style="margin: 0; line-height: 125%"><span style="color: #f92672">&lt;</span><span style="color: #960050; background-color: #1e0010">!</span><span style="color: #f8f8f2">DOCTYPE</span> <span style="color: #f8f8f2">html</span><span style="color: #f92672">&gt;</span>
<span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">html</span> <span style="color: #f8f8f2">lang</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;en&quot;</span><span style="color: #f92672">&gt;</span>
  <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">head</span><span style="color: #f92672">&gt;</span>
    <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">meta</span> <span style="color: #f8f8f2">charset</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;UTF-8&quot;</span> <span style="color: #f92672">/&gt;</span>
    <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">meta</span> <span style="color: #f8f8f2">name</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;viewport&quot;</span> <span style="color: #f8f8f2">content</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;width=device-width, initial-scale=1.0&quot;</span> <span style="color: #f92672">/&gt;</span>
    <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">title</span><span style="color: #f92672">&gt;</span><span style="color: #f8f8f2">Document</span><span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">title</span><span style="color: #f92672">&gt;</span>
    <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">link</span>
      <span style="color: #f8f8f2">href</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;https://cdn.jsdelivr.net/npm/bootstrap@5.1.1/dist/css/bootstrap.min.css&quot;</span>
      <span style="color: #f8f8f2">rel</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;stylesheet&quot;</span>
      <span style="color: #f8f8f2">integrity</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;sha384-F3w7mX95PdgyTmZZMECAngseQB83DfGTowi0iMjiWaeVhAn4FJkqJByhZMI3AhiU&quot;</span>
      <span style="color: #f8f8f2">crossorigin</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;anonymous&quot;</span>
    <span style="color: #f92672">/&gt;</span>
    <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">style</span><span style="color: #f92672">&gt;</span>
      <span style="color: #f92672">.</span><span style="color: #f8f8f2">form</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">new</span> <span style="color: #f8f8f2">{</span>
        <span style="color: #f8f8f2">margin</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">right:</span> <span style="color: #ae81ff">22</span><span style="color: #f92672">%</span><span style="color: #f8f8f2">;</span>
        <span style="color: #f8f8f2">margin</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">left:</span> <span style="color: #ae81ff">20</span><span style="color: #f92672">%</span><span style="color: #f8f8f2">;</span>
      <span style="color: #f8f8f2">}</span>
      <span style="color: #f92672">.</span><span style="color: #f8f8f2">heading</span> <span style="color: #f8f8f2">{</span>
        <span style="color: #f8f8f2">width:</span> <span style="color: #ae81ff">150</span><span style="color: #f92672">%</span><span style="color: #f8f8f2">;</span>
        <span style="color: #f8f8f2">display:</span> <span style="color: #f8f8f2">flex;</span>
        <span style="color: #f8f8f2">justify</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">content:</span> <span style="color: #f8f8f2">center;</span>
        <span style="color: #f8f8f2">align</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">items:</span> <span style="color: #f8f8f2">center;</span>
        <span style="color: #f8f8f2">color:</span> <span style="color: #75715e">#e9ecef;</span>
        <span style="color: #f8f8f2">font</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">size:</span> <span style="color: #ae81ff">45</span><span style="color: #f8f8f2">px;</span>
        <span style="color: #f8f8f2">font</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">family:</span> <span style="color: #f8f8f2">Arial,</span> <span style="color: #f8f8f2">Helvetica,</span> <span style="color: #f8f8f2">sans</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">serif;</span>
      <span style="color: #f8f8f2">}</span>
      <span style="color: #f92672">.</span><span style="color: #f8f8f2">register</span> <span style="color: #f8f8f2">{</span>
        <span style="color: #f8f8f2">background:</span> <span style="color: #f8f8f2">linear</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">gradient(</span>
          <span style="color: #ae81ff">162.29</span><span style="color: #f8f8f2">deg,</span>
          <span style="color: #f8f8f2">rgba(</span><span style="color: #ae81ff">62</span><span style="color: #f8f8f2">,</span> <span style="color: #ae81ff">60</span><span style="color: #f8f8f2">,</span> <span style="color: #ae81ff">88</span><span style="color: #f8f8f2">,</span> <span style="color: #ae81ff">0.64</span><span style="color: #f8f8f2">)</span> <span style="color: #ae81ff">0.99</span><span style="color: #f92672">%</span><span style="color: #f8f8f2">,</span>
          <span style="color: #f8f8f2">rgba(</span><span style="color: #ae81ff">23</span><span style="color: #f8f8f2">,</span> <span style="color: #ae81ff">22</span><span style="color: #f8f8f2">,</span> <span style="color: #ae81ff">40</span><span style="color: #f8f8f2">,</span> <span style="color: #ae81ff">0</span><span style="color: #f8f8f2">)</span> <span style="color: #ae81ff">179.83</span><span style="color: #f92672">%</span>
        <span style="color: #f8f8f2">);</span>
        <span style="color: #f8f8f2">border</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">radius:</span> <span style="color: #ae81ff">20</span><span style="color: #f8f8f2">px;</span>
        <span style="color: #f8f8f2">box</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">sizing:</span> <span style="color: #f8f8f2">border</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">box;</span>
        <span style="color: #f8f8f2">margin</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">top:</span> <span style="color: #ae81ff">3</span><span style="color: #f92672">%</span><span style="color: #f8f8f2">;</span>
        <span style="color: #f8f8f2">padding:</span> <span style="color: #ae81ff">3</span><span style="color: #f92672">%</span><span style="color: #f8f8f2">;</span>
      <span style="color: #f8f8f2">}</span
      <span style="color: #f92672">.</span><span style="color: #f8f8f2">centerheading</span> <span style="color: #f8f8f2">{</span>
        <span style="color: #f8f8f2">font</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">size:</span> <span style="color: #ae81ff">30</span><span style="color: #f8f8f2">px;</span>
        <span style="color: #f8f8f2">display:</span> <span style="color: #f8f8f2">flex;</span>
        <span style="color: #f8f8f2">justify</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">content:</span> <span style="color: #f8f8f2">center;</span>
      <span style="color: #f8f8f2">}</span>
    <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">style</span><span style="color: #f92672">&gt;</span>
  <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">head</span><span style="color: #f92672">&gt;</span>
  <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">body</span><span style="color: #f92672">&gt;</span>
    <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">nav</span> <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;navbar navbar-dark bg-dark&quot;</span><span style="color: #f92672">&gt;</span>
      <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">div</span> <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;container-fluid&quot;</span><span style="color: #f92672">&gt;</span>
        <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">a</span>
          <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;navbar-brand&quot;</span>
          <span style="color: #f8f8f2">href</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;https://docs.google.com/spreadsheets/d/1owGzJeJTi-7V40Xi_7GgYHtdmZrIYVEpnA92yYP3VrY/edit#gid=0&quot;</span>
          <span style="color: #f92672">&gt;</span><span style="color: #f8f8f2">Html</span> <span style="color: #f8f8f2">to</span> <span style="color: #f8f8f2">Google</span> <span style="color: #f8f8f2">sheets</span><span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">a</span>
        <span style="color: #f92672">&gt;</span>
      <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">div</span><span style="color: #f92672">&gt;</span>
    <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">nav</span><span style="color: #f92672">&gt;</span>
    <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">div</span> <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;container register&quot;</span><span style="color: #f92672">&gt;</span>
      <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">div</span> <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;row&quot;</span><span style="color: #f92672">&gt;</span>
        <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">div</span> <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;col-md-12&quot;</span><span style="color: #f92672">&gt;</span>
          <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">div</span>
            <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;tab-pane fade show active text-align form-new&quot;</span>
            <span style="color: #f8f8f2">id</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;home&quot;</span>
            <span style="color: #f8f8f2">role</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;tabpanel&quot;</span>
            <span style="color: #f8f8f2">aria</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">labelledby</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;home-tab&quot;</span>
          <span style="color: #f92672">&gt;</span>
            <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">div</span> <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;shadow-lg p-3 mb-5 bg-body rounded&quot;</span><span style="color: #f92672">&gt;</span>
              <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">section</span> <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;centerheading&quot;</span><span style="color: #f92672">&gt;</span><span style="color: #f8f8f2">Html</span> <span style="color: #f8f8f2">data</span> <span style="color: #f8f8f2">to</span> <span style="color: #f8f8f2">google</span> <span style="color: #f8f8f2">sheet</span><span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">section</span><span style="color: #f92672">&gt;</span>
            <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">div</span><span style="color: #f92672">&gt;</span>
            <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">div</span> <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;row register-form&quot;</span><span style="color: #f92672">&gt;</span>
              <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">div</span> <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;col-md-12&quot;</span><span style="color: #f92672">&gt;</span>
                <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">form</span> <span style="color: #f8f8f2">method</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;post&quot;</span> <span style="color: #f8f8f2">autocomplete</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;off&quot;</span> <span style="color: #f8f8f2">name</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;google-sheet&quot;</span><span style="color: #f92672">&gt;</span>
                  <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">div</span> <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;form-group&quot;</span><span style="color: #f92672">&gt;</span>
                    <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">div</span> <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;input-group mb-3&quot;</span><span style="color: #f92672">&gt;</span>
                      <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">input</span>
                        <span style="color: #f8f8f2">type</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;text&quot;</span>
                        <span style="color: #f8f8f2">name</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;Name&quot;</span>
                        <span style="color: #f8f8f2">value</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;&quot;</span>
                        <span style="color: #f8f8f2">required</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;&quot;</span>
                        <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;form-control&quot;</span>
                        <span style="color: #f8f8f2">placeholder</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;Recipient&#39;s username&quot;</span>
                        <span style="color: #f8f8f2">aria</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">label</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;Recipient&#39;s username&quot;</span>
                        <span style="color: #f8f8f2">aria</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">describedby</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;basic-addon2&quot;</span>
                      <span style="color: #f92672">/&gt;</span>
                      <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">span</span> <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;input-group-text&quot;</span> <span style="color: #f8f8f2">id</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;basic-addon2&quot;</span>
                        <span style="color: #f92672">&gt;</span><span style="color: #f8f8f2">Your</span> <span style="color: #f8f8f2">name</span>
                      <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">span</span><span style="color: #f92672">&gt;</span>
                    <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">div</span><span style="color: #f92672">&gt;</span>
                  <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">div</span><span style="color: #f92672">&gt;</span>
                  <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">div</span> <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;form-group&quot;</span><span style="color: #f92672">&gt;</span>
                    <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">div</span> <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;input-group mb-3&quot;</span><span style="color: #f92672">&gt;</span>
                      <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">input</span>
                        <span style="color: #f8f8f2">type</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;text&quot;</span>
                        <span style="color: #f8f8f2">name</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;Email&quot;</span>
                        <span style="color: #f8f8f2">value</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;&quot;</span>
                        <span style="color: #f8f8f2">required</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;&quot;</span>
                        <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;form-control&quot;</span>
                        <span style="color: #f8f8f2">placeholder</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;Your Email *&quot;</span>
                        <span style="color: #f8f8f2">aria</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">label</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;Recipient&#39;s username&quot;</span>
                        <span style="color: #f8f8f2">aria</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">describedby</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;basic-addon2&quot;</span>
                      <span style="color: #f92672">/&gt;</span>
                      <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">span</span> <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;input-group-text&quot;</span> <span style="color: #f8f8f2">id</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;basic-addon2&quot;</span>
                        <span style="color: #f92672">&gt;</span><span style="color: #a6e22e">@gmail.com</span><span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">span</span>
                      <span style="color: #f92672">&gt;</span>
                    <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">div</span><span style="color: #f92672">&gt;</span>
                    <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">img</span> <span style="color: #f8f8f2">src</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;./Googlesheet.png&quot;</span> <span style="color: #f8f8f2">alt</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;&quot;</span> <span style="color: #f92672">/&gt;</span>
                  <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">div</span><span style="color: #f92672">&gt;</span>
                  <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">div</span> <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;form-group&quot;</span><span style="color: #f92672">&gt;</span>
                    <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">input</span>
                      <span style="color: #f8f8f2">type</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;number&quot;</span>
                      <span style="color: #f8f8f2">name</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;Phone&quot;</span>
                      <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;form-control&quot;</span>
                      <span style="color: #f8f8f2">placeholder</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;Your Contact Number *&quot;</span>
                      <span style="color: #f8f8f2">value</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;&quot;</span>
                      <span style="color: #f8f8f2">required</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;&quot;</span>
                    <span style="color: #f92672">/&gt;</span>
                  <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">div</span><span style="color: #f92672">&gt;</span>
                  <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">div</span> <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;form-group&quot;</span><span style="color: #f92672">&gt;</span>
                    <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">div</span> <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;input-group mb-3&quot;</span><span style="color: #f92672">&gt;</span>
                      <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">input</span>
                        <span style="color: #f8f8f2">type</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;text&quot;</span>
                        <span style="color: #f8f8f2">name</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;Message&quot;</span>
                        <span style="color: #f8f8f2">value</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;&quot;</span>
                        <span style="color: #f8f8f2">required</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;&quot;</span>
                        <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;form-control my-3&quot;</span>
                        <span style="color: #f8f8f2">placeholder</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;Enter the message&quot;</span>
                        <span style="color: #f8f8f2">aria</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">label</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;Recipient&#39;s username&quot;</span>
                        <span style="color: #f8f8f2">aria</span><span style="color: #f92672">-</span><span style="color: #f8f8f2">describedby</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;basic-addon2&quot;</span>
                      <span style="color: #f92672">/&gt;</span>
                    <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">div</span><span style="color: #f92672">&gt;</span>
                  <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">div</span><span style="color: #f92672">&gt;</span>
                  <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">div</span> <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;form-group&quot;</span><span style="color: #f92672">&gt;</span>
                    <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">button</span>
                      <span style="color: #f8f8f2">type</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;submit&quot;</span>
                      <span style="color: #f8f8f2">name</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;submit&quot;</span>
                      <span style="color: #f8f8f2">class</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;btn btn-outline-success my-5 btn-lg&quot;</span>
                    <span style="color: #f92672">&gt;</span>
                      <span style="color: #f8f8f2">Success</span>
                    <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">button</span><span style="color: #f92672">&gt;</span>
                  <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">div</span><span style="color: #f92672">&gt;</span>
                <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">form</span><span style="color: #f92672">&gt;</span>
              <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">div</span><span style="color: #f92672">&gt;</span>
            <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">div</span><span style="color: #f92672">&gt;</span>
          <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">div</span><span style="color: #f92672">&gt;</span>
        <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">div</span><span style="color: #f92672">&gt;</span>
      <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">div</span><span style="color: #f92672">&gt;</span>
    <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">div</span><span style="color: #f92672">&gt;</span>
    <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">script</span><span style="color: #f92672">&gt;</span>
      <span style="color: #f8f8f2">const</span> <span style="color: #f8f8f2">scriptURL</span> <span style="color: #f92672">=</span>
        <span style="color: #e6db74">&quot;https://script.google.com/macros/s/AKfycbxFnHqHV20SQOIIO3jyBYcxGb2Pv2l90Xpu0u_tEN3opfMMAAdry6ShlyIEfoaS3K-jBw/exec&quot;</span><span style="color: #f8f8f2">;</span>
      <span style="color: #f8f8f2">const</span> <span style="color: #f8f8f2">form</span> <span style="color: #f92672">=</span> <span style="color: #f8f8f2">document</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">forms[</span><span style="color: #e6db74">&quot;google-sheet&quot;</span><span style="color: #f8f8f2">];</span>
      <span style="color: #f8f8f2">form</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">addEventListener(</span><span style="color: #e6db74">&quot;submit&quot;</span><span style="color: #f8f8f2">,</span> <span style="color: #f8f8f2">(e)</span> <span style="color: #f92672">=&gt;</span> <span style="color: #f8f8f2">{</span>
        <span style="color: #f8f8f2">e</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">preventDefault();</span>
        <span style="color: #f8f8f2">fetch(scriptURL,</span> <span style="color: #f8f8f2">{</span> <span style="color: #f8f8f2">method:</span> <span style="color: #e6db74">&quot;POST&quot;</span><span style="color: #f8f8f2">,</span> <span style="color: #f8f8f2">body:</span> <span style="color: #f8f8f2">new</span> <span style="color: #f8f8f2">FormData(form)</span> <span style="color: #f8f8f2">})</span>
          <span style="color: #f92672">.</span><span style="color: #f8f8f2">then((response)</span> <span style="color: #f92672">=&gt;</span> <span style="color: #f8f8f2">alert(</span><span style="color: #e6db74">&quot;Thanks for fiiling the form&quot;</span><span style="color: #f8f8f2">))</span>
          <span style="color: #f92672">.</span><span style="color: #f8f8f2">catch((error)</span> <span style="color: #f92672">=&gt;</span> <span style="color: #f8f8f2">console</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">error(</span><span style="color: #e6db74">&quot;Error!&quot;</span><span style="color: #f8f8f2">,</span> <span style="color: #f8f8f2">error</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">message));</span>
      <span style="color: #f8f8f2">});</span>
    <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">script</span><span style="color: #f92672">&gt;</span>
    <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">script</span> <span style="color: #f8f8f2">src</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;https://maxcdn.bootstrapcdn.com/bootstrap/4.1.1/js/bootstrap.min.js&quot;</span><span style="color: #f92672">&gt;&lt;/</span><span style="color: #f8f8f2">script</span><span style="color: #f92672">&gt;</span>
    <span style="color: #f92672">&lt;</span><span style="color: #f8f8f2">script</span> <span style="color: #f8f8f2">src</span><span style="color: #f92672">=</span><span style="color: #e6db74">&quot;https://cdnjs.cloudflare.com/ajax/libs/jquery/3.2.1/jquery.min.js&quot;</span><span style="color: #f92672">&gt;&lt;/</span><span style="color: #f8f8f2">script</span><span style="color: #f92672">&gt;</span>
  <span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">body</span><span style="color: #f92672">&gt;</span>
<span style="color: #f92672">&lt;/</span><span style="color: #f8f8f2">html</span><span style="color: #f92672">&gt;</span>
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
<div style="background: #272822; overflow:auto;width:auto;border:solid gray;border-width:.1em .1em .1em .8em;padding:.2em .6em;"><pre style="margin: 0; line-height: 125%"><span style="color: #f8f8f2">var</span> <span style="color: #f8f8f2">GooglesheetName</span> <span style="color: #f92672">=</span> <span style="color: #e6db74">&quot;Sheet1&quot;</span><span style="color: #f8f8f2">;</span>
<span style="color: #f8f8f2">var</span> <span style="color: #f8f8f2">scriptProp</span> <span style="color: #f92672">=</span> <span style="color: #f8f8f2">PropertiesService</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">getScriptProperties();</span>
<span style="color: #f8f8f2">function</span> <span style="color: #f8f8f2">intialSetup()</span> <span style="color: #f8f8f2">{</span>
  <span style="color: #f8f8f2">var</span> <span style="color: #f8f8f2">activeSpreadsheet</span> <span style="color: #f92672">=</span> <span style="color: #f8f8f2">SpreadsheetApp</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">getActiveSpreadsheet();</span>
  <span style="color: #f8f8f2">scriptProp</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">setProperty(</span><span style="color: #e6db74">&quot;key&quot;</span><span style="color: #f8f8f2">,</span> <span style="color: #f8f8f2">activeSpreadsheet</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">getId());</span>
<span style="color: #f8f8f2">}</span>
<span style="color: #f8f8f2">function</span> <span style="color: #f8f8f2">doPost(e)</span> <span style="color: #f8f8f2">{</span>
  <span style="color: #f8f8f2">var</span> <span style="color: #f8f8f2">lock</span> <span style="color: #f92672">=</span> <span style="color: #f8f8f2">LockService</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">getScriptLock();</span>
  <span style="color: #f8f8f2">lock</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">tryLock(</span><span style="color: #ae81ff">10000</span><span style="color: #f8f8f2">);</span>
  <span style="color: #66d9ef">try</span> <span style="color: #f8f8f2">{</span>
    <span style="color: #f8f8f2">var</span> <span style="color: #f8f8f2">doc</span> <span style="color: #f92672">=</span> <span style="color: #f8f8f2">SpreadsheetApp</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">openById(scriptProp</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">getProperty(</span><span style="color: #e6db74">&quot;key&quot;</span><span style="color: #f8f8f2">));</span>
    <span style="color: #f8f8f2">var</span> <span style="color: #f8f8f2">sheet</span> <span style="color: #f92672">=</span> <span style="color: #f8f8f2">doc</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">getSheetByName(GooglesheetName);</span>
    <span style="color: #f8f8f2">var</span> <span style="color: #f8f8f2">headers</span> <span style="color: #f92672">=</span> <span style="color: #f8f8f2">sheet</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">getRange(</span><span style="color: #ae81ff">1</span><span style="color: #f8f8f2">,</span> <span style="color: #ae81ff">1</span><span style="color: #f8f8f2">,</span> <span style="color: #ae81ff">1</span><span style="color: #f8f8f2">,</span> <span style="color: #f8f8f2">sheet</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">getLastColumn())</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">getValues()[</span><span style="color: #ae81ff">0</span><span style="color: #f8f8f2">];</span>
    <span style="color: #f8f8f2">var</span> <span style="color: #f8f8f2">nextRow</span> <span style="color: #f92672">=</span> <span style="color: #f8f8f2">sheet</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">getLastRow()</span> <span style="color: #f92672">+</span> <span style="color: #ae81ff">1</span><span style="color: #f8f8f2">;</span>
    <span style="color: #f8f8f2">var</span> <span style="color: #f8f8f2">newRow</span> <span style="color: #f92672">=</span> <span style="color: #f8f8f2">headers</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">map(function</span> <span style="color: #f8f8f2">(header)</span> <span style="color: #f8f8f2">{</span>
      <span style="color: #66d9ef">return</span> <span style="color: #f8f8f2">header</span> <span style="color: #f92672">===</span> <span style="color: #e6db74">&quot;timestamp&quot;</span> <span style="color: #960050; background-color: #1e0010">?</span> <span style="color: #f8f8f2">new</span> <span style="color: #f8f8f2">Date()</span> <span style="color: #f8f8f2">:</span> <span style="color: #f8f8f2">e</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">parameter[header];</span>
    <span style="color: #f8f8f2">});</span>
    <span style="color: #f8f8f2">sheet</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">getRange(nextRow,</span> <span style="color: #ae81ff">1</span><span style="color: #f8f8f2">,</span> <span style="color: #ae81ff">1</span><span style="color: #f8f8f2">,</span> <span style="color: #f8f8f2">newRow</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">length)</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">setValues([newRow]);</span>
    <span style="color: #66d9ef">return</span> <span style="color: #f8f8f2">ContentService</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">createTextOutput(</span>
      <span style="color: #f8f8f2">JSON</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">stringify({</span> <span style="color: #f8f8f2">result:</span> <span style="color: #e6db74">&quot;success&quot;</span><span style="color: #f8f8f2">,</span> <span style="color: #f8f8f2">row:</span> <span style="color: #f8f8f2">nextRow</span> <span style="color: #f8f8f2">})</span>
    <span style="color: #f8f8f2">)</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">setMimeType(ContentService</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">MimeType</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">JSON);</span>
  <span style="color: #f8f8f2">}</span> <span style="color: #f8f8f2">catch</span> <span style="color: #f8f8f2">(e)</span> <span style="color: #f8f8f2">{</span>
    <span style="color: #66d9ef">return</span> <span style="color: #f8f8f2">ContentService</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">createTextOutput(</span>
      <span style="color: #f8f8f2">JSON</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">stringify({</span> <span style="color: #f8f8f2">result:</span> <span style="color: #e6db74">&quot;error&quot;</span><span style="color: #f8f8f2">,</span> <span style="color: #f8f8f2">error:</span> <span style="color: #f8f8f2">e</span> <span style="color: #f8f8f2">})</span>
    <span style="color: #f8f8f2">)</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">setMimeType(ContentService</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">MimeType</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">JSON);</span>
  <span style="color: #f8f8f2">}</span> <span style="color: #66d9ef">finally</span> <span style="color: #f8f8f2">{</span>
    <span style="color: #f8f8f2">lock</span><span style="color: #f92672">.</span><span style="color: #f8f8f2">releaseLock();</span>
  <span style="color: #f8f8f2">}</span>
<span style="color: #f8f8f2">}</span>
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
