

def wrap(string, max_width):
    wrapper = textwrap.TextWrapper(width=max_width)
    string1 = wrapper.fill(text=string) 
    return string1


