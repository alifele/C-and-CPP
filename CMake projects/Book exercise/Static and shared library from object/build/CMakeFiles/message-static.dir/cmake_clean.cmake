file(REMOVE_RECURSE
  "libmessage-static.a"
  "libmessage-static.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/message-static.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
