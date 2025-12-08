## an elliptic curve?

In ECC, an elliptic curve is defined by an equation of the form:

$$
y^2 = x^3 + ax + b
$$

with the condition that $4a^3 + 27b^2 \neq 0$ (to avoid singularities like cusps or self-intersections).

Graphically, this looks like an "∞" shape, but for cryptography we use points **over a finite field**, not real numbers.

---

## Elliptic curve over a finite field

Instead of real numbers, ECC works modulo a prime $p$. The set of valid points is:

$$
E(\mathbb{F}_p) = \{ (x, y) \in \mathbb{F}_p^2 \mid y^2 \equiv x^3 + ax + b \ (\text{mod } p) \} \cup \{\mathcal{O}\}
$$

* $\mathcal{O}$ is a special point at infinity, which acts as the identity element of the group.

---

1. Decide base point G(x,y) and p, a, b.
2. G + G + G + ... = nG(PublicKey), n is private key
**G + G**
* 楕円曲線上にある接点Gに関して、接線を得ることができます。
* この接線は必ず接点G以外の楕円曲線上の点と交わります。
* その交点のx軸対称の点が次の点2G

##  Curve25519

A specific, modern elliptic curve:

$$
y^2 = x^3 + 486662x^2 + x \quad \text{over } \mathbb{F}_{2^{255} - 19}
$$

* Uses the prime field $p = 2^{255} - 19$.

