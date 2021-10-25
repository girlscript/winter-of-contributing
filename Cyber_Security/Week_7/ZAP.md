## OWASP-ZAP


 - **OWASP ZAP** (Zed Attack Proxy)  is open-source penetration testing tool designed specifically for testing web applications and is both flexible and extensible.

 - It is cross platform i.e. it can be installed in Windows, Linux or Mac OS.

 - It is intended to be used by both those new to application security as well as professional penetration testers.

 - ZAP can scan through the web application and detect issues related to:
   
    - SQL injection
   -   Broken Authentication
   -   Sensitive data exposure
   -   Broken Access control
   -   Security misconfiguration
   -   Cross Site Scripting (XSS)
   -   Insecure Deserialization
   -   Components with known vulnerabilities
   -   Missing security headers

## Installation of OWASP ZAP:


Download the ZAP tool from https://www.zaproxy.org/download/ and install it. Once it is installed, the following window will appear for the first time:

![choose No](https://i.imgur.com/5imgJ4Z.png)

To save the results or persist the ZAP session, select option 1 or 2. For now, select **No, I do not want to persist this session at this moment in time**, then click **Start**. The ZAP sessions will not be persisted for now. The following window will appear:

![ZAP](https://i.imgur.com/2sED2wc.png)

## Running an Automated Scan


 - Start ZAP and click the  **Quick Start**  tab of the Workspace Window.
- Click the large Automated Scan button.
-  Enter the full URL of the web application that you want to attack in the  **URL to attack**  text box. Click **Attack**

**Note:**  Use ZAP only when you have permission to attack an application since this simulation acts as a real attack and it could cause damage to a site's functionality, data, etc. To ensure that ZAP don't cause harm to the application, use safe mode.

![Automated Scan](https://i.imgur.com/WdIdv3d.png)

ZAP provides 2 spiders for crawling web applications, you can use either or both of them from this screen.

**Traditional ZAP spider**- It discovers links by examining the HTML in responses from the web application. This spider is fast, but it is not always effective when exploring an AJAX web application that generates links using JavaScript.

**Ajax Spider** - It is used for AJAX applications. This spider explores the web application by invoking browsers which then follow the links that have been generated. The AJAX spider is slower than the traditional spider and requires additional configuration for use in a “headless” environment.

## Viewing the Results


Once attack is completed, follow steps to view the results:

- Click the  **Alerts**  tab in the Information Window. Click each alert displayed in that window to display the URL and the vulnerability detected in the right side of the Information Window. The description, solution and references are also given for the vulnerability.
- In the Workspace Window, click the  **Response**  tab to see the contents of the header and body of the response. The part of the response that generated the alert will be highlighted.
- To examine a tree view of the explored pages, click the **Sites** tab in the Tree Window. You can expand the nodes to see the individual URLs accessed.
- The left-hand side of the **Footer** contains a count of the Alerts found during your test, broken out into risk categories. These risk categories are: High, Medium, Low, Informational and False Positive.

## Features of OWASP ZAP


- AJAX Spidering
- ZAP Jenkins Plugin
- Web socket Testing
-  Highly Scriptable
- Fuzzing
- Flexible Scan Policy Management
- Interacting Programmatically with ZAP via the REST API

**References**:
https://www.zaproxy.org/getting-started/
