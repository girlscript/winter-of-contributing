# Styling the Elements

To make an animation possible, the animated element must be animated relative to a `parent container`. The container element should be created with style = `position: relative`. The animation element should be created with style =  `position: absolute`

# Example

#myContainer {
  width: 400px;
  height: 400px;
  position: relative;
  background: yellow;
}

#myAnimation {
  width: 50px;
  height: 50px;
  position: absolute;
  background: red;
}

# Animations Code

var id = setInterval(frame, 5);

function frame() {
  if (/* test for finished */) {
    clearInterval(id);
  } else {
    /* code to change the element style */ 
  }
}

# Execution

var id = null;
function myMove() {
  var elem = document.getElementById("myAnimation");
  var pos = 0;
  clearInterval(id);
  id = setInterval(frame, 10);
  function frame() {
    if (pos == 350) {
      clearInterval(id);
    } else {
      pos++;
      elem.style.top = pos + 'px';
      elem.style.left = pos + 'px';
    }
  }
}