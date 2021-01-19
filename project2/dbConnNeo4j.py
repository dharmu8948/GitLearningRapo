from neo4j import GraphDatabase,basic_auth

driver = GraphDatabase.driver("bolt://localhost:11018", auth=basic_auth("neo4j","1234"))
session = driver.session()
# retireving all data from database
result = list(session.run("MATCH (n) RETURN n"))
for record in result:
    print(record)

# printing nodes with their relationships

res = list(session.run("MATCH ((n)-[r]->(m)) RETURN n.name,type(r),m.name"))
for record in res:
    print(record['n.name'],record['type(r)'],record['m.name'])

# returning specific property like name only
#
# name = list(session.run('match(n) return n'))
# print([record['n.name'] for record in name])