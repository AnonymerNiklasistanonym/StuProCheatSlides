gpg --gen-key
# Enter your name and email, then enter a (password - REMEMBER IT!)
# (If asked select RSA and 4096 and 1y)
gpg --list-secret-keys --keyid-format LONG
# Copy the string under between "..rsa####/" and "YYYY-MM.."
gpg --armor --export 42GTJI9734UHGRF1 # Use your string!
# Copy the whole output block to your clipboard From
# "-----BEGIN PGP PUBLIC KEY BLOCK-----" to
# "-----END PGP PUBLIC KEY BLOCK-----"
