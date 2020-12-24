public String getName() {
    String encodedAddr = "";
    if (getAddress() != null) {
        encodedAddr = "" + getAddress();
        if (encodedAddr.startsWith("/"))
            encodedAddr = encodedAddr.substring(1);
        encodedAddr = URLEncoder.encode(encodedAddr) + "-";
    }
    return ("http-" + encodedAddr + endpoint.getPort());
}