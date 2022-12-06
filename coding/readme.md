# Coding Folder!

This is my coding folder.

Download compress-tools.tar.xz.base64 and extract it like this

```
base64 -d comptess-tools.tar.xz.base64 >compress-tools.tar.xz
xz -d compress-tools.tar.xz
tar xvf compress.tar
```

Now you have a way of converting folders into text.

Use compress.sh like tar.

`./compress.sh file.tar folders files other-stuff...`

For decompress.sh, add `.tar` in the file extention, but nothing else.

To decompress folder.tar.xz.base64: `./decompress.sh folder.tar`

And lastly, a quick guideline:

Do this

```
~ > ls
folder
~ > ./compress.sh folder.tar folder
```

Do not do this!

```
~ > cd folder
~/folder > ../compress.sh ../folder.tar .
```

The first example creates an archive with files like `folder/file1`
but the other example creates files like `file1` with no prefix.
The prefix makes them easier to organize.

# Why tho???

Ever herd of play-with-docker.com? When I don't have acess to my computer
like when I am at school, I use it to compile code. Somthing it has is an 'editor'
thing. It lets you copy and paste text info files without using vim or nano or wahtever.

I could move text in and out of the image like this. Then I wondered if I could cram
several files all into one and well, thats literlly waht tar is made for!

I use base64 because tar files contain special characters that can't be copied on Windows.
I don't know about chromebook but I decided to add it in just in case.

I will post these tar.xz.base64 files to here as code projects.
I should write the date on them too. Should. Probibly will forget tho...

I will extract these later on the weekend on my pc.
