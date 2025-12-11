# Gitlab Server

* Reset Root password
```bash
# Enter into Rails console
gitlab-rails console
user = User.find_by(username: 'root')
user.password = 'New_Password'
user.password_confirmation = 'New_Password'
user.save!

exit
```


**Require admin approval for new sign-ups**

**Enable 2 FA**