
node=`uname -n`
home_3rd=~/3rd/${node}

home_boost=$home_3rd/boost
home_rem=$home_3rd/rem_api_2.0.1.34
home_fmt=$home_3rd/fmt


export LD_LIBRARY_PATH=$home_boost/lib:$home_rem/lib/trade/C++/linux64:$home_rem/lib/quote/C++/linux64:$home_fmt/lib


