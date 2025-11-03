

### Address

**Address（アドレス）** は、人や組織の所在地を表す情報です。


### 基本要素
- **郵便番号（Postal Code / ZIP Code）**
- **国（Country）**
- **都道府県/州（State / Province）**
- **市区町村（City）**
- **町名・番地（Street Address）**
- **建物名・部屋番号（Building / Apartment）**

### 補足要素
- **地域・地区（District / Region）**
- **緯度・経度（Latitude / Longitude）**
- **住所種別（Type）**: 自宅、職場、配送先など



```sql
CREATE TABLE addresses (
    address_id INT PRIMARY KEY AUTO_INCREMENT,
    postal_code VARCHAR(20),
    country VARCHAR(100),
    state VARCHAR(100),
    city VARCHAR(100),
    street_address VARCHAR(255),
    building VARCHAR(100),
    -- apartment VARCHAR(50),
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP
);


