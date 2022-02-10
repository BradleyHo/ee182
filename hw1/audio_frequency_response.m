clc; clear;

[x, fs] = audioread('bradleytylerho.wav'); # Provide your own audio signal

N = length(x);
n = 0 : N - 1;
plot(n, x)

OM = 0 : 0.01 : pi;
X = exp(-1i * OM' * n) * x; # MATLAB recommends to change j and i to 1i

f = OM * fs / (2 * pi);
figure;
plot(f, abs(X))
