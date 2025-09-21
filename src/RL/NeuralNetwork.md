

## MLP (Multi-Layer Perceptron)

* Fully Connected Layer
* Output Layer:
    * Discrete: Softmax()
    * Continuous: Gauss Distribution(平均・分散 = Average · Variance = Mittelwert · Varianz)
* RL

1. input(Obs), output dimension(Act)
2. hidden layer(net_arch): Layer between input and output layer.
    * 入力と出力の 非線形な関係 を学習できるようにする = To enable learning of nonlinear relationships between inputs and outputs. = ermöglicht, nichtlineare Zusammenhänge zwischen Eingaben und Ausgaben zu lernen.
3. activation function:
(4. 正則化= Normalization, Initialization)

**Perceptron**
* a "neuron" that multiplies inputs by weights, sums them up, and passes the result through an activation function to produce an output.
* ein „Neuron“, das Eingaben mit Gewichten multipliziert, sie summiert und das Ergebnis durch eine Aktivierungsfunktion zur Ausgabe weiterleitet.


**Unit = Node = Neuron**

1. get input
$z=w1x1+w2x2+⋯+wnxn+b$ (b = bias)

2. Activate Function = 活性化関数 
$y=σ(z)$
 

3. Pass y next layer


**Softmax()**
* Produce values between [0:1]

**Fully Connected Layer, Dense Layer(全結合層)**
* 各ニューロンが前層のすべてのニューロンと結合
* Each neuron is connected to all neurons in the previous layer.
* Jedes Neuron ist mit allen Neuronen der vorherigen Schicht verbunden.
