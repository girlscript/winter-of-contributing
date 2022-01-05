function main() {

    const htmlCanvas = document.querySelector("canvas");
    const getCanvas = htmlCanvas.getContext("webgl");


    // Setting Vertices
    const vertex = new Float32Array([
        -0.5, 0, 0,
        0, 0.5, 0,
        0, -0.5, 0,
    ]);


    // Creating a buffer
    const buffer = getCanvas.createBuffer();
    getCanvas.bindBuffer(getCanvas.ARRAY_BUFFER, buffer);
    getCanvas.bufferData(getCanvas.ARRAY_BUFFER, vertex, getCanvas.STATIC_DRAW);

    // Vertex Shader
    const vertexShader = getCanvas.createShader(getCanvas.VERTEX_SHADER);
    getCanvas.shaderSource(vertexShader, `
    attribute vec3 position;
    void main() { 
        gl_Position = vec4(position, 1);
    }
    `);
    getCanvas.compileShader(vertexShader);

    // Fragment Shader
    const fragmentShader = getCanvas.createShader(getCanvas.FRAGMENT_SHADER);
    getCanvas.shaderSource(fragmentShader, `
    void main(){
        gl_FragColor = vec4(1, 0, 5, 1);
    }
    `);
    getCanvas.compileShader(fragmentShader);

    // Combining two shaders
    const program = getCanvas.createProgram();
    getCanvas.attachShader(program, vertexShader);
    getCanvas.attachShader(program, fragmentShader);
    getCanvas.linkProgram(program);

    // Loading the attributes
    const pos = getCanvas.getAttribLocation(program, `position`);
    getCanvas.enableVertexAttribArray(pos);
    getCanvas.vertexAttribPointer(pos, 3, getCanvas.FLOAT, false, 0, 0);

    // Execute the program
    getCanvas.useProgram(program);
    getCanvas.drawArrays(getCanvas.TRIANGLES, 0, 3);
}

window.onload = main;
