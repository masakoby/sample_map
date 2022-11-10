

std::map<std::string, std::string> m1;
m1.insert(std::pair<std::string, std::string>("Shinjuku", "Tokyo"));
m1.insert(std::pair<std::string, std::string>("Shibuya", "Tokyo"));
m1.insert(std::pair<std::string, std::string>("Makuhari", "Chiba"));
m1.insert(std::pair<std::string, std::string>("Ohmiya", "Saitama"));
m1.insert(std::pair<std::string, std::string>("Yokohama", "Kanagawa"));

m1["Ikebukuro"]="Tokyo";


std::map<std::string, std::string>::iterator iter = m1.begin();
while (iter != m1.end()) {
			std::cout<<iter->first<<" "<<iter->second<<std::endl;
			iter++;
}
