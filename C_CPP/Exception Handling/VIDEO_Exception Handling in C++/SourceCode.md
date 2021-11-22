{
 "cells": [
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "# Source Code\n",
    "\n",
    "1. Exception.cpp"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": [
    "//Simple Exception Handling - Divide by 0\n",
    "#include <iostream>\n",
    "using namespace std\n",
    "int main()\n",
    "{\n",
    "    int a = 50\n",
    "    int b = 5\n",
    "    double c = 0\n",
    "    try\n",
    "    {\n",
    "        if(b == 0)\n",
    "        {\n",
    "            throw(1)\n",
    "        }\n",
    "        c = a/b\n",
    "        cout << \"\\n Division is \" << c\n",
    "    }\n",
    "    catch(int i){\n",
    "        cout << \"\\n Divide by zero error!! Number can not be divide by 0. Error number \" << i\n",
    "    }\n",
    "    return 0\n",
    "}\n"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "2. Exception2.cpp"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": [
    "//Exception Handling using multiple throw and catch\n",
    "#include <iostream>\n",
    "using namespace std\n",
    "\n",
    "int main()\n",
    "{\n",
    "    int a = 3\n",
    "    try\n",
    "    {\n",
    "        if(a == 1)\n",
    "        {\n",
    "            throw 1\n",
    "        }\n",
    "        if (a == 2)\n",
    "        {\n",
    "            throw 'a'\n",
    "        }\n",
    "        if (a == 3)\n",
    "        {\n",
    "            throw float(20.9)\n",
    "        }\n",
    "    }\n",
    "    catch(int i)\n",
    "    {\n",
    "        cout << \"Caught Integer Exception value=\" << a\n",
    "    }\n",
    "    catch(char i)\n",
    "    {\n",
    "        cout << \"Caught Character Exception value=\" << a\n",
    "    }\n",
    "    catch(float i)\n",
    "    {\n",
    "        cout << \"Caught Float Exception value=\" << a\n",
    "    }\n",
    "    return 0\n",
    "}\n"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "3. Exception3.cpp"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": [
    "//Multiple throw single catch block\n",
    "#include <iostream>\n",
    "using namespace std\n",
    "\n",
    "int main()\n",
    "{\n",
    "    int a = 1\n",
    "    try\n",
    "    {\n",
    "        if (a == 1)\n",
    "        {\n",
    "            throw 1\n",
    "        }\n",
    "        if (a == 2)\n",
    "        {\n",
    "            throw 'b'\n",
    "        }\n",
    "        if (a == 3)\n",
    "        {\n",
    "            throw float(20.9)\n",
    "        }\n",
    "    }\n",
    "    catch(...)\n",
    "    {\n",
    "        cout << \"Caught an Exception value\" << a\n",
    "    }\n",
    "\n",
    "    return 0\n",
    "}\n"
   ]
  }
 ],
 "metadata": {
  "language_info": {
   "name": "python"
  },
  "orig_nbformat": 4
 },
 "nbformat": 4,
 "nbformat_minor": 2
}
