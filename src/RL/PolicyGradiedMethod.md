# Policy Gradient Method

* Policy = 「ある状態 s のときにどの行動 a を取るか」 = Which action a to take in a given state s = Welche Aktion a in einem gegebenen Zustand s ausgeführt wird

* Parametarization = 方策を 関数 として表し、その関数の形を パラメータ（θ）でコントロールすること = Expressing the policy as a function and controlling the form of that function by parameters (θ) ＝ Die Politik als Funktion darzustellen und die Form dieser Funktion durch Parameter (θ) zu steuern 

   * Argument: Input $s \in \mathcal{S}$
   * Return: Output 行動空間 A 上の確率分布 = 行動候補ごとの確率 = the probability of each action candidate = die Wahrscheinlichkeit jedes Handlungskandidaten
   * Sampling: Do action based on output


$\pi_\theta(a \mid s) = P(a \mid s; \theta)$
    * 各項の意味 
    * the interpretation of each term
    * die Bedeutung jedes Terms
        * $\pi_\theta$ = パラメータ θ によって形が変わる確率分布
        * $\pi_\theta(a|s)$ =  状態 s のときに行動 a を選ぶ確率分布
        * $P(a \mid s; \theta)$= 状態 s のもとで、パラメータ θ に基づき、行動 a を選ぶ条件付き確率
        * ; = パラメータ依存性を明示, s に依存する確率分布だけど、θ によって決まる

                * 確率分布 = probability distribution = Wahrscheinlichkeitsverteilung
                * 条件付き確率 = conditional probability = bedingte WahrscheinlichkeitP(A∣B) =  the probability of A given B = die Wahrscheinlichkeit von A gegeben B
    **Example:**
    $\pi_\theta(a \mid s) = \text{Softmax}\!\big(f_\theta(s)\big)$

    f_\theta():
        1. Table, Matrix
        2. approximated Function
        3. Neural Network
        Stable-Baseline3

        ```python
        from stable_baselines3 import PPO

        # 1. Policy Class: f_\theta =「多層パーセプトロン (MLP)」
        model = PPO("MlpPolicy", env, verbose=1)

        # 2. Custom Network Structure
        policy_kwargs = dict(
        net_arch=[64, 64]  # 隠れ層が2層、Unit number 64
        )

        model = PPO("MlpPolicy", env, policy_kwargs=policy_kwargs, verbose=1)
        ```


        ```python
        import torch as th
        import torch.nn as nn
        from stable_baselines3.common.policies import ActorCriticPolicy

        class CustomPolicy(ActorCriticPolicy): # inherit ActorCriticPolicy
            def __init__(self, *args, **kwargs):
                super(CustomPolicy, self).__init__(*args, **kwargs,
                                           net_arch=[128, 128],
                                           activation_fn=nn.ReLU)
        ```

**強化学習の学習 = 「良い報酬が得られるように θ を少しずつ変える」**
slightly changing θ in order to obtain good rewards