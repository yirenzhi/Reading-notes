set tabstop=4
set syntax=on
set background=dark
set nu
"自动补全
set completeopt=preview,menu
"自动缩进
set autoindent
"自动保存
set autowrite

"自动补全
:inoremap ( ()<ESC>i
:inoremap " ""<ESC>i
:inoremap ' ''<ESC>i
:inoremap { {<CR>}<ESC>O<TAB>
:inoremap [ {}<ESC>i

"显示中文帮助
if version >= 603
	set helplang=cn
	set encoding=utf-8
endif
"侦测文件类型
filetype plugin indent on

"自动插入头文件
autocmd BufNewFile *.cpp,*.h exec ":call SetTitle()"
func SetTitle()
	if expand("%:e")=='cpp'
		call setline(1, "\#include<iostream>")
		call setline(2, "\#include<string>")
		call setline(3, "using namespace std;")
		call setline(4, "int main()")
		call setline(5, "{")
		call setline(6, "    return 0;")
		call setline(7, "}")
		execute "normal 5Go"

	elseif expand("%:e")=='h'
		let gataname = substitute(toupper(expand("%:t")),"\\.","_","g")
		call setline(1, "ifndef _".gataname)
		call setline(2, "define _".gataname)
		call setline(3, "")
		call setline(4, "#endif")
		execute "normal! 3Go"
	endif

	"新建文件后，自动定位到文件末尾
	""autocmd BufNewFile * normal G
endfunc


"新建文件后，自动定位到文件末尾
""autocmd BufNewFile * normal 5G 
