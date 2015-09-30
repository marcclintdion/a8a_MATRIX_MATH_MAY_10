varying vec3  Position;
varying float LightIntensity;

float MaxIterations = 35;
float Zoom = .5;
float Xcenter = 0;
float Ycenter = 0;
vec3 InnerColor = vec3(1, 1, 1);
vec3 OuterColor1 = vec3(0, 0, 0);
vec3 OuterColor2 = vec3(0, 1, 0);
uniform float time;

void main()
{
    float real  = Position.x * Zoom + Xcenter;
    float imag  = Position.y * Zoom + Ycenter;
    float Creal = sin(time);
    float Cimag = cos(0.75 * time);

    float r2 = 0.0;
    float iter;

    for (iter = 0.0; iter < MaxIterations && r2 < 4.0; ++iter)
    {
        float tempreal = real;

        real = (tempreal * tempreal) - (imag * imag) + Creal;
        imag = 2.0 * tempreal * imag + Cimag;
        r2   = (real * real) + (imag * imag);
    }

    // Base the color on the number of iterations

    vec3 color;

    if (r2 < 4.0)
        color = InnerColor;
    else
        color = mix(OuterColor1, OuterColor2, fract(iter * 0.05));

    color *= LightIntensity;

    gl_FragColor = vec4(color, 1.0);
}












