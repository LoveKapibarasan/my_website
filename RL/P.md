
## Laplace’s Definition

* **Idea**: This applies when all possible outcomes are assumed to be equally likely.

* **Formula**:

  $$
  P(A) = \frac{\text{Number of favorable outcomes for A}}{\text{Total number of possible outcomes}}
  $$


* This definition only works when outcomes are equally likely. 

---

## Axiomatic Probability (Kolmogorov’s Axioms)

* **Framework**: Introduce a probability space $(\Omega, \mathcal{F}, P)$.

1. **Non-negativity**: For any event $A$,

   $$
   P(A) \geq 0
   $$

2. **Normalization**: For the entire sample space $\Omega$,

   $$
   P(\Omega) = 1
   $$

   * $P(A) \leq  1$

3. **Additivity**: For mutually exclusive events $A, B$,

   $$
   P(A \cup B) = P(A) + P(B)
   $$

* Any function satisfying these three axioms is considered a probability measure. Classical and statistical definitions can both be understood within this framework.

---

##  Statistical Probability (Frequentist Interpretation)

* **Idea**: Defines probability as the long-run relative frequency of an event occurring in repeated experiments.

* **Formula**:
  If an experiment is performed $n$ times, and event $A$ occurs $N(A)$ times, then

  $$
  P(A) = \lim_{n \to \infty} \frac{N(A)}{n}
  $$


## Space
* ただの集合に性質やルールを与えて扱いやすくしたもの

    * Probability Space
    $(Ω,F,P)$
    Ω（オメガ）: 標本空間 → 実験の全ての結果の集合
    F: 事象の集合（σ-代数） → 「確率を割り当てられる部分集合」の集まり
    P: 確率測度 → 各事象に対して 0～1 の数を割り当てる関数

