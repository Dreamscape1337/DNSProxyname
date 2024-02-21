{
    "host" : "localhost",
    "port" : 1234,
    "logfile": "filter-dns.log",
    "forwardes" : [
        {
            "address": "8.8.8.8",
            "Port": 53,
            "protocol": "udp"
        }
    ],
    "filters" : []
        {

            "host": "netflix.com",
            "type": "AAAA",
            "matching": "contains"
        }
    ]
}
